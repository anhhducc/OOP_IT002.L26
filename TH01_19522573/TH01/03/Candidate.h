#include "DoB.h"
#include <string>
#include <iomanip>
using namespace std;

#pragma once
class Candidate
{
private:
	string sMaso;
	string sTen;
	DoB dBirth;
	float fToan, fVan, fAnh;
public:
	void Nhap();
	void Xuat();
	float TongDiem();

};

