#include <iostream>
using namespace std;

#pragma once
class CTimeSpan
{
private:
	int Hour, Min, Sec;
public:
	void Nhap();
	void Xuat();
	CTimeSpan();
	CTimeSpan(int newH, int newM, int newS);
	CTimeSpan(CTimeSpan& newT);
	void TimeChuan();
	int SumSec();
	CTimeSpan operator+(CTimeSpan b);
	CTimeSpan operator-(CTimeSpan b);
	friend bool operator==(CTimeSpan a, CTimeSpan b);
	friend bool operator!=(CTimeSpan a, CTimeSpan b);
	friend bool operator>(CTimeSpan a, CTimeSpan b);
	friend bool operator>=(CTimeSpan a, CTimeSpan b);
	friend bool operator<(CTimeSpan a, CTimeSpan b);
	friend bool operator<=(CTimeSpan a, CTimeSpan b);
};

