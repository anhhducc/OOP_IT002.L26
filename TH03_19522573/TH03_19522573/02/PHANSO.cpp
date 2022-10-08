#include "PHANSO.h"

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
	c = UCLN(this->Tu, this->Mau);
	this->Tu = (this->Tu) / c;
	this->Mau = (this->Mau) / c;
}
float PHANSO::Switch()
{
	float value;
	value = float(Tu) / float(Mau);
	return value;
}
PHANSO PHANSO::operator+(PHANSO b)
{
	PHANSO Tong;
	Tong.Tu = this->Tu * b.Mau + this->Mau * b.Tu;
	Tong.Mau = this->Mau * b.Mau;
	Tong.RutGon();
	return Tong;
}
PHANSO PHANSO::operator-(PHANSO b)
{
	PHANSO Hieu;
	Hieu.Tu = this->Tu * b.Mau - this->Mau * b.Tu;
	Hieu.Mau = this->Mau * b.Mau;
	Hieu.RutGon();
	return Hieu;
}
PHANSO PHANSO::operator*(PHANSO b)
{
	PHANSO Tich;
	Tich.Tu = this->Tu * b.Tu;
	Tich.Mau = this->Mau * b.Mau;
	Tich.RutGon();
	return Tich;
}
PHANSO PHANSO::operator/(PHANSO b)
{
	PHANSO Thuong;
	Thuong.Tu = this->Tu * b.Mau;
	Thuong.Mau = this->Mau * b.Tu;
	Thuong.RutGon();
	return Thuong;
}
PHANSO operator+(float a, PHANSO b)
{
	PHANSO _a(a);
	PHANSO Tong;
	Tong.Tu = _a.Tu * b.Mau + _a.Mau * b.Tu;
	Tong.Mau = _a.Mau * b.Mau;
	Tong.RutGon();
	return Tong;
}
PHANSO operator-(float a, PHANSO b)
{
	PHANSO _a(a);
	PHANSO Hieu;
	Hieu.Tu = _a.Tu * b.Mau - _a.Mau * b.Tu;
	Hieu.Mau = _a.Mau * b.Mau;
	Hieu.RutGon();
	return Hieu;
}
PHANSO operator*(float a, PHANSO b)
{
	PHANSO _a(a);
	PHANSO Tich;
	Tich.Tu = _a.Tu * b.Tu;
	Tich.Mau = _a.Mau * b.Mau;
	Tich.RutGon();
	return Tich;
}
PHANSO operator/(float a, PHANSO b)
{
	PHANSO _a(a);
	PHANSO Thuong;
	Thuong.Tu = _a.Tu * b.Mau;
	Thuong.Mau = _a.Mau * b.Tu;
	Thuong.RutGon();
	return Thuong;
}
bool operator==(PHANSO a, PHANSO b)
{
	a.RutGon();
	b.RutGon();
	if (a.Tu == b.Tu && a.Tu == b.Mau)
		return true;
	return false;
}
bool operator!=(PHANSO a, PHANSO b)
{
	a.RutGon();
	b.RutGon();
	if (a.Tu != b.Tu || a.Tu != b.Mau)
		return true;
	return false;
}
bool operator>(PHANSO a, PHANSO b)
{
	if (a.Switch() > b.Switch())
		return true;
	return false;
}
bool operator>=(PHANSO a, PHANSO b)
{
	if (a.Switch() >= b.Switch())
		return true;
	return false;
}
bool operator<(PHANSO a, PHANSO b)
{
	if (a.Switch() < b.Switch())
		return true;
	return false;
}
bool operator<=(PHANSO a, PHANSO b)
{
	if (a.Switch() <= b.Switch())
		return true;
	return false;
}