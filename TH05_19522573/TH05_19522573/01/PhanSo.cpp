#include "PhanSo.h"
int PhanSo::UCLN(int a, int b)
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
void PhanSo::RutGon()
{
	int c;
	c = UCLN(this->TS, this->MS);
	this->TS = (this->TS) / c;
	this->MS = (this->MS) / c;
}
float PhanSo::Switch()
{
	float value;
	value = float(TS) / float(MS);
	return value;
}
PhanSo PhanSo::Cong(PhanSo b)
{
	PhanSo Tong;
	Tong.TS = this->TS * b.MS + this->MS * b.TS;
	Tong.MS = this->MS * b.MS;
	Tong.RutGon();
	return Tong;
}
PhanSo PhanSo::Tru(PhanSo b)
{
	PhanSo Hieu;
	Hieu.TS = this->TS * b.MS - this->MS * b.TS;
	Hieu.MS = this->MS * b.MS;
	Hieu.RutGon();
	return Hieu;
}
PhanSo PhanSo::Nhan(PhanSo b)
{
	PhanSo Tich;
	Tich.TS = this->TS * b.TS;
	Tich.MS = this->MS * b.MS;
	Tich.RutGon();
	return Tich;
}
PhanSo PhanSo::Chia(PhanSo b)
{
	PhanSo Thuong;
	Thuong.TS = this->TS * b.MS;
	Thuong.MS = this->MS * b.TS;
	Thuong.RutGon();
	return Thuong;
}
PhanSo PhanSo::operator++(int)
{
	PhanSo c = *this;
	this->TS += this->MS;
	return c;
}
PhanSo& PhanSo::operator++()
{
	this->TS += this->MS;
	return *this;
}