#include "CDate.h"

int CDate::SoNgay[] = { 31,31,28,31,30,31,30,31,31,30,31,30,31 };

char* CDate::Thang[] = { "December", "January", "February", "March", "April", 
"May", "June", "July", "August", "September", "October", "November", "December" };

CDate::CDate()
{
	iDay = 1;
	iMonth = 1;
	iYear = 1;
}

CDate::~CDate()
{
}

void CDate::Nhap()
{
	cout << "Nhap ngay: ";
	cin >> iDay;
	cout << "Nhap thang: ";
	cin >> iMonth;
	cout << "Nhap nam: ";
	cin >> iYear;
}

void CDate::Xuat()
{
	cout << iDay << "/" << iMonth << "/" << iYear;
}

bool CDate::KTDate()
{
	if (iYear < 0)
		return false;

	if ((iMonth < 1) || (iMonth > 12))
		return false;

	if (KTNhuan() && iMonth == 2 && iDay <= 29 && iDay > 1)
		return true;

	if (iDay > SoNgay[iMonth] || iDay < 1)
		return false;

	return true;
}

bool CDate::KTNhuan()
{
	if ((iYear % 4 == 0 && iYear % 100 != 0) || iYear % 400 == 0)
		return true;
	return false;
}