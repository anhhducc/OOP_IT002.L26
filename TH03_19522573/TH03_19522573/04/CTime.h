#include <iostream>
#include <time.h>
using namespace std;

#pragma once
class CTime
{
private:
	int Hour, Min, Sec;
public:
	friend istream& operator>> (istream& is, CTime& a)
	{
		cout << "Nhap gio: ";
		is >> a.Hour;
		cout << "Nhap phut: ";
		is >> a.Min;
		cout << "Nhap giay: ";
		is >> a.Sec;
		cout << endl;
		return is;
	}
	friend ostream& operator<< (ostream& os, CTime& a)
	{
		os << "Thoi gian la: " << a.Hour << ":" << a.Min << ":" << a.Sec << endl;
		return os;
	}
	CTime(int x = 0, int y = 0, int z = 0)
	{
		Hour = x;
		Min = y;
		Sec = z;
	}
	CTime(CTime& newT);
	void TimeChuan();
	friend CTime operator+(CTime a, int x);
	friend CTime operator-(CTime a, int x);
	CTime operator-(CTime b);
	CTime operator++(int);
	CTime operator--(int);
};

