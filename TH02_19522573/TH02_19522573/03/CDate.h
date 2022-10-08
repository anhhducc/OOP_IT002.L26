#pragma once

#include<iostream>
#include<math.h>

using namespace std;

class CDate
{
private:
	int iYear;
	int iMonth;
	int iDay;
	static int SoNgay[];
	static char* Thang[];

public:
	CDate();
	~CDate();
	void Nhap();
	void Xuat();
	bool KTDate();
	bool KTNhuan();
};