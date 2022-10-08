#include "CTimeSpan.h"

void CTimeSpan::Nhap()
{
	cout << "Nhap gio: ";
	cin >> this->Hour;
	cout << "Nhap phut: ";
	cin >> this->Min;
	cout << "Nhap giay: ";
	cin >> this->Sec;
	cout << endl;
}

void CTimeSpan::Xuat()
{
	cout << "Thoi gian la: " << this->Hour << ":" << this->Min << ":" << this->Sec << endl;
}
CTimeSpan::CTimeSpan() : Hour(0), Min(0), Sec(0)
{

}
CTimeSpan::CTimeSpan(int newH, int newM, int newS) : Hour(newH), Min(newM), Sec(newS)
{

}
CTimeSpan::CTimeSpan(CTimeSpan& newT)
{
	this->Hour = newT.Hour;
	this->Min = newT.Min;
	this->Sec = newT.Sec;
}
void CTimeSpan::TimeChuan()
{
	if (Sec >= 60)
	{
		int a;
		a = Sec / 60;
		Min = Min + a;
		Sec = Sec - a * 60;
	}


	if (Min >= 60)
	{
		int c;
		c = Min / 60;
		Hour = Hour + c;
		Min = Min - c * 60;
	}
}
int CTimeSpan::SumSec()
{
	int Sum;
	Sum = Hour * 3600 + Min * 60 + Sec;
	return Sum;
}
CTimeSpan CTimeSpan::operator+(CTimeSpan b)
{
	CTimeSpan Sum;
	Sum.Hour = Hour + b.Hour;
	Sum.Min = Min + b.Min;
	Sum.Sec = Sec + b.Sec;
	Sum.TimeChuan();
	return Sum;
}
CTimeSpan CTimeSpan::operator-(CTimeSpan b)
{
	CTimeSpan Hieu;
	Hieu.Hour = Hour - b.Hour;
	Hieu.Min = Min - b.Min;
	Hieu.Sec = Sec - b.Sec;
	Hieu.TimeChuan();
	return Hieu;
}
bool operator==(CTimeSpan a, CTimeSpan b)
{
	if (a.SumSec() == b.SumSec())
		return true;
	return false;
}
bool operator!=(CTimeSpan a, CTimeSpan b)
{
	if (a.SumSec() != b.SumSec())
		return true;
	return false;
}
bool operator>(CTimeSpan a, CTimeSpan b)
{
	if (a.SumSec() > b.SumSec())
		return true;
	return false;
}
bool operator>=(CTimeSpan a, CTimeSpan b)
{
	if (a.SumSec() >= b.SumSec())
		return true;
	return false;
}
bool operator<(CTimeSpan a, CTimeSpan b)
{
	if (a.SumSec() < b.SumSec())
		return true;
	return false;
}
bool operator<=(CTimeSpan a, CTimeSpan b) {
	if (a.SumSec() <= b.SumSec())
		return true;
	return false;
}