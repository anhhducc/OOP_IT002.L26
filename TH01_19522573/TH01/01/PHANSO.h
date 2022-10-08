#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

#pragma once


class PHANSO
{
private:
	int iTuSo, iMauSo;
public:
	void Xuat();
	void Nhap();
	int UCLN(int a, int b);
	void RutGon();
	PHANSO Cong(PHANSO a);
	PHANSO Tru(PHANSO a);
	PHANSO Nhan(PHANSO a);
	PHANSO Chia(PHANSO a);
};

