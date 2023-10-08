// MFCApplication3Dlg.cpp: 实现文件
#include "pch.h"
#include "framework.h"
#include "MFCApplication3.h"
#include "MFCApplication3Dlg.h"
#include "afxdialogex.h"
#define pi 3.1415926535898
#define std_angle (pi/180)
#ifdef _DEBUG
#define new DEBUG_NEW
#endif
class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
protected:
	DECLARE_MESSAGE_MAP()
};
CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}
void CAboutDlg::DoDataExchange(CDataExchange* pDX) //Default component
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()
CMFCApplication3Dlg::CMFCApplication3Dlg(CWnd* pParent /*=nullptr*/) //Default component
	: CDialogEx(IDD_MFCAPPLICATION3_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}
BEGIN_MESSAGE_MAP(CMFCApplication3Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_EN_CHANGE(IDC_EDIT1, &CMFCApplication3Dlg::OnEnChangeEdit1)
	ON_BN_CLICKED(IDC_BUTTON23, &CMFCApplication3Dlg::OnBnClickedButton23)
	ON_BN_CLICKED(IDC_BUTTON24, &CMFCApplication3Dlg::OnBnClickedButton24)
	ON_BN_CLICKED(IDC_BUTTON20, &CMFCApplication3Dlg::OnBnClickedButton20)
	ON_BN_CLICKED(IDC_BUTTON22, &CMFCApplication3Dlg::OnBnClickedButton22)
	ON_BN_CLICKED(IDC_BUTTON1, &CMFCApplication3Dlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CMFCApplication3Dlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON18, &CMFCApplication3Dlg::OnBnClickedButton18)
	ON_BN_CLICKED(IDC_BUTTON5, &CMFCApplication3Dlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &CMFCApplication3Dlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &CMFCApplication3Dlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON9, &CMFCApplication3Dlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &CMFCApplication3Dlg::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON11, &CMFCApplication3Dlg::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON13, &CMFCApplication3Dlg::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON14, &CMFCApplication3Dlg::OnBnClickedButton14)
	ON_BN_CLICKED(IDC_BUTTON15, &CMFCApplication3Dlg::OnBnClickedButton15)
	ON_BN_CLICKED(IDC_BUTTON19, &CMFCApplication3Dlg::OnBnClickedButton19)
	ON_BN_CLICKED(IDC_BUTTON12, &CMFCApplication3Dlg::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON16, &CMFCApplication3Dlg::OnBnClickedButton16)
	ON_BN_CLICKED(IDC_BUTTON4, &CMFCApplication3Dlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON8, &CMFCApplication3Dlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON21, &CMFCApplication3Dlg::OnBnClickedButton21)
	ON_EN_CHANGE(IDC_EDIT2, &CMFCApplication3Dlg::OnEnChangeEdit2)
END_MESSAGE_MAP()
BOOL CMFCApplication3Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}
	SetIcon(m_hIcon, TRUE);			
	SetIcon(m_hIcon, FALSE);		
	// TODO:Add additional initialization code here
	return TRUE; 
}

void CMFCApplication3Dlg::OnSysCommand(UINT nID, LPARAM lParam) //Default component
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}
void CMFCApplication3Dlg::OnPaint() //Default component
{
	if (IsIconic())
	{
		CPaintDC dc(this); 
		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}
HCURSOR CMFCApplication3Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}
void CMFCApplication3Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, str);
	DDX_Text(pDX, IDC_EDIT2, str0);
}
void CMFCApplication3Dlg::OnEnChangeEdit1()
{
}

void CMFCApplication3Dlg::SaveFirstValue()
{
	UpdateData(TRUE);
	num1 = _wtof(str);  //The string contents are converted to floating-point numbers
	TempStr = str;
	str = L"";
	UpdateData(FALSE);
}
void CMFCApplication3Dlg::Calculator()    //"="
{
	UpdateData(TRUE);
	num2 = _wtof(str);
	double result = 0.0f;
	//Select the corresponding case based on the operator type
	switch (flag)
	{
	case FLAG_Add:
		result = num1 + num2;
		TempStr = TempStr + _T("+") + str + _T("=");
		break;
	case FLAG_Sub:
		result = num1 - num2;
		TempStr = TempStr + _T("-") + str + _T("=");
		break;
	case FLAG_Mul:
		result = num1 * num2;
		TempStr = TempStr + _T("x") + str + _T("=");
		break;
	case FLAG_Did:
		if (num2 == 0.0f)
		{
			result = num1;
			TempStr = _T("The divisor cannot be 0！");
		}
		else
		{
			result = num1 / num2;
			TempStr = TempStr + _T("/") + str + _T("=");
		}
		break;
	case FLAG_Power:
		result = pow(num1, num2);
		TempStr = TempStr + _T("^") + str + _T("=");
		break;
	default:
		break;
	}
	if (result - int(result) <= 1e-5)
	{
		str.Format(L"%d", (int)result);  //For integer processing, %d means output data according to the actual length of the integer data
	}
	else
	{
		str.Format(L"%f", result);  //Decimal processing, %f represents floating-point numbers (including double, float)
	}
	TempStr += str;
	str0 = TempStr;
	UpdateData(FALSE);  //Update the data in the above edit box
	num1 = result;  //The result is assigned num1
	num2 = 0.0f;
}
void CMFCApplication3Dlg::OnBnClickedButton23()
{
	UpdateData(TRUE);
	TempStr = _T("sin(") + str + _T(")=");
	num1 = _wtof(str);
	double f = sin(num1 * std_angle);  
	if (f - int(f) <= 1e-5)
	{
		str.Format(L"%d", (int)f);
	}
	else
	{
		str.Format(L"%f", f);
	}
	TempStr += str;
	str0 = TempStr;
	UpdateData(FALSE);  
	num1 = f;
	num2 = 0.0f;
	flag = FLAG_Sinx;
}
void CMFCApplication3Dlg::OnBnClickedButton24()
{
	UpdateData(TRUE);
	TempStr = _T("cos(") + str + _T(")=");
	num1 = _wtof(str);
	double f = cos(num1 * std_angle);
	if (f - int(f) <= 1e-5)
	{
		str.Format(L"%d", (int)f);
	}
	else
	{
		str.Format(L"%f", f);
	}
	TempStr += str;
	str0 = TempStr;
	UpdateData(FALSE);  
	num1 = f;
	num2 = 0.0f;
	flag = FLAG_Cosx;
}
void CMFCApplication3Dlg::OnBnClickedButton20()
{
	UpdateData(TRUE);
	TempStr = _T("tan(") + str + _T(")=");
	num1 = _wtof(str);
	double f = sin(num1 * std_angle) / cos(num1 * std_angle);
	if (f - int(f) <= 1e-5)
	{
		str.Format(L"%d", (int)f);
	}
	else
	{
		str.Format(L"%f", f);
	}
	TempStr += str;
	str0 = TempStr;
	UpdateData(FALSE);
	num1 = f;
	num2 = 0.0f;
	flag = FLAG_Tanx;
}
void CMFCApplication3Dlg::OnBnClickedButton22()
{
	UpdateData(TRUE);
	TempStr = _T("ln") + str + _T("=");
	num1 = _wtof(str);
	double f = log(num1); //logarithm operation
	if (f - int(f) <= 1e-5)
	{
		str.Format(L"%d", (int)f);
	}
	else
	{
		str.Format(L"%f", f);
	}
	TempStr += str;  //represent the result
	str0 = TempStr;
	UpdateData(FALSE);
	num1 = f;
	num2 = 0.0f;
	flag = FLAG_Lnx;
}
void CMFCApplication3Dlg::OnBnClickedButton1()
{
	UpdateData(TRUE);
	str = L""; //Leave the string empty
	num1 = 0.0f;
	num2 = 0.0f;
	UpdateData(FALSE);
}
void CMFCApplication3Dlg::OnBnClickedButton2()
{
	UpdateData(TRUE);   //Gets the string inside all text boxes
	if (!str.IsEmpty()) {
		str = str.Left(str.GetLength() - 1); //String length minus 1
	}
	UpdateData(FALSE);    //Update the string content to the text box by using UpdateData() function
}
//The following code is to inout number 0-9
void CMFCApplication3Dlg::OnBnClickedButton18()
{
	UpdateData(TRUE);
	str += L"0";
	UpdateData(FALSE);
}
void CMFCApplication3Dlg::OnBnClickedButton5()
{
	UpdateData(TRUE);
	str += L"1";
	UpdateData(FALSE);
}
void CMFCApplication3Dlg::OnBnClickedButton6()
{
	UpdateData(TRUE);
	str += L"2";
	UpdateData(FALSE);
}
void CMFCApplication3Dlg::OnBnClickedButton7()
{
	UpdateData(TRUE);
	str += L"3";
	UpdateData(FALSE);
}
void CMFCApplication3Dlg::OnBnClickedButton9()
{
	UpdateData(TRUE);
	str += L"4";
	UpdateData(FALSE);
}
void CMFCApplication3Dlg::OnBnClickedButton10()
{
	UpdateData(TRUE);
	str += L"5";
	UpdateData(FALSE);
}
void CMFCApplication3Dlg::OnBnClickedButton11()
{
	UpdateData(TRUE);
	str += L"6";
	UpdateData(FALSE);
}
void CMFCApplication3Dlg::OnBnClickedButton13()
{
	UpdateData(TRUE);
	str += L"7";
	UpdateData(FALSE);
}
void CMFCApplication3Dlg::OnBnClickedButton14()
{
	UpdateData(TRUE);
	str += L"8";
	UpdateData(FALSE);
}
void CMFCApplication3Dlg::OnBnClickedButton15()
{
	UpdateData(TRUE);
	str += L"9";
	UpdateData(FALSE);
}
void CMFCApplication3Dlg::OnBnClickedButton19() //When the input is decimal point
{
	UpdateData(TRUE);
	//If no decimal point exists, add a decimal point
	//Prevents two decimal points from being present at the same time
	if (-1 == str.Find(L'.')) {
		str += L".";
	}
	UpdateData(FALSE);
}
//The following codes in order to realize the fundermental operations(Addition/Substration/Multiply/Division)
void CMFCApplication3Dlg::OnBnClickedButton12()
{
	SaveFirstValue(); //to save num1
	flag = FLAG_Add;  //The addition operation is implemented by calling case=FLAG Add in switch
}
void CMFCApplication3Dlg::OnBnClickedButton16()
{
	SaveFirstValue(); 
	flag = FLAG_Sub;  
}
void CMFCApplication3Dlg::OnBnClickedButton4()
{
	SaveFirstValue(); 
	flag = FLAG_Mul;
}
void CMFCApplication3Dlg::OnBnClickedButton8()
{
	SaveFirstValue(); 
	flag = FLAG_Did;
}
void CMFCApplication3Dlg::OnBnClickedButton21() //To realize the function of equal sign 
{
	Calculator();
}
void CMFCApplication3Dlg::OnEnChangeEdit2()
{
}
