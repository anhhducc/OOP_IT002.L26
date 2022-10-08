#include <iostream>
#include <math.h>
using namespace std;

#pragma once
class SOPHUC
{
private:
	int iThuc, iAo;
public:
	void Nhap();
	void Xuat();
	SOPHUC Cong(SOPHUC b);
	SOPHUC Tru(SOPHUC b);
	SOPHUC Nhan(SOPHUC b);
	SOPHUC Chia(SOPHUC b);

};


