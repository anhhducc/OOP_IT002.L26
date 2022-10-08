#include <iostream>
#include <cmath>
using namespace std;

#pragma once
class PHANSO
{
private:
	int Tu, Mau;
public:
	PHANSO(int a = 0, int b = 1)
	{
		Tu = a;
		Mau = b;
	}
	PHANSO(PHANSO& a)
	{
		Tu = a.Tu;
		Mau = a.Mau;
	}
	int UCLN(int a, int b);
	void RutGon();
	float Switch();
	PHANSO operator+(PHANSO b);
	friend PHANSO operator+(float a, PHANSO b);
	PHANSO operator-(PHANSO b);
	friend PHANSO operator-(float a, PHANSO b);
	PHANSO operator*(PHANSO b);
	friend PHANSO operator*(float a, PHANSO b);
	PHANSO operator/(PHANSO b);
	friend PHANSO operator/(float a, PHANSO b);
	friend bool operator==(PHANSO a, PHANSO b);
	friend bool operator!=(PHANSO a, PHANSO b);
	friend bool operator>(PHANSO a, PHANSO b);
	friend bool operator>=(PHANSO a, PHANSO b);
	friend bool operator<(PHANSO a, PHANSO b);
	friend bool operator<=(PHANSO a, PHANSO b);
	friend istream& operator>> (istream& is, PHANSO& a)
	{
		cout << "Nhap tu: ";
		is >> a.Tu;
		cout << "Nhap mau: ";
		is >> a.Mau;
		cout << endl;
		return is;
	}
	friend ostream& operator<< (ostream& os, PHANSO& a)
	{
		os << a.Tu << "/" << a.Mau;
		return os;
	}
};

