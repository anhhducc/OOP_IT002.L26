#include "PHANSO.h"

void PHANSO::Nhap()
{
	cout << "Nhap tu: ";
	cin >> this->iTuSo;
	cout << "Nhap mau:";
	cin >> this->iMauSo;
	cout << endl;
}

void PHANSO::Xuat()
{
	cout << this->iTuSo << "/" << this->iMauSo << endl;
}

int PHANSO::UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
		if (a > b)
			a = a - b;
		else
			b = b - a;
	return a + b;
}

void PHANSO::RutGon()
{
	int c;
	c = UCLN(this->iTuSo, this->iMauSo);
	this->iTuSo = (this->iTuSo) / c;
	this->iMauSo = (this->iMauSo) / c;
}

PHANSO PHANSO::Cong(PHANSO a)
{
	PHANSO Tong;
	Tong.iTuSo = this->iTuSo * a.iMauSo + this->iMauSo * a.iTuSo;
	Tong.iMauSo = this->iMauSo * a.iMauSo;
	Tong.RutGon();
	cout << "Tong la: ";
	return Tong;
}

PHANSO PHANSO::Tru(PHANSO a)
{
	PHANSO Hieu;
	Hieu.iTuSo = this->iTuSo * a.iMauSo - this->iMauSo * a.iTuSo;
	Hieu.iMauSo = this->iMauSo * a.iMauSo;
	Hieu.RutGon();
	cout << "Hieu la: ";
	return Hieu;
}

PHANSO PHANSO::Nhan(PHANSO a)
{
	PHANSO Tich;
	Tich.iTuSo = this->iTuSo * a.iTuSo;
	Tich.iMauSo = this->iMauSo * a.iMauSo;
	Tich.RutGon();
	cout << "Tich la: ";
	return Tich;
}

PHANSO PHANSO::Chia(PHANSO a)
{
	PHANSO Thuong;
	Thuong.iTuSo = this->iTuSo * a.iMauSo;
	Thuong.iMauSo = this->iMauSo * a.iTuSo;
	Thuong.RutGon();
	cout << "Thuong la: ";
	return Thuong;
}