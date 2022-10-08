#pragma once
#include <iostream>
#include <cmath>
using namespace std;

class PhanSo
{
private:
	int TS, MS;
public:
	PhanSo(int a = 0, int b = 1)
	{
		TS = a;
		MS = b;
	}
	PhanSo(PhanSo& a)
	{
		TS = a.TS;
		MS = a.MS;
	}
	~PhanSo()
	{}
	int UCLN(int a, int b);
	void RutGon();
	float Switch();
	PhanSo Cong(PhanSo b);
	PhanSo Tru(PhanSo b);
	PhanSo Nhan(PhanSo b);
	PhanSo Chia(PhanSo b);

	friend istream& operator>> (istream& is, PhanSo& a)
	{
		cout << "Nhap tu so:";
		is >> a.TS;
		cout << "Nhap mau so:";
		is >> a.MS;
		return is;
	}
	friend ostream& operator<< (ostream& os, PhanSo& a)
	{
		os << a.TS << "/" << a.MS;
		return os;
	}
	PhanSo operator++(int);
	PhanSo& operator++();
};

