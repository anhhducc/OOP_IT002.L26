#include "SOPHUC.h"


SOPHUC SOPHUC::operator+(SOPHUC b)
{
	SOPHUC Tong;
	Tong.Thuc = this->Thuc + b.Thuc;
	Tong.Ao = this->Ao + b.Ao;
	return Tong;
}
SOPHUC operator+(float a, SOPHUC b)
{
	SOPHUC Tong;
	SOPHUC _a(a);
	Tong.Thuc = _a.Thuc + b.Thuc;
	Tong.Ao = _a.Ao + b.Ao;
	return Tong;
}
SOPHUC SOPHUC::operator-(SOPHUC b)
{
	SOPHUC Hieu;
	Hieu.Thuc = this->Thuc - b.Thuc;
	Hieu.Ao = this->Ao - b.Ao;
	return Hieu;
}
SOPHUC operator-(float a, SOPHUC b) {
	SOPHUC Hieu;
	SOPHUC _a(a);
	Hieu.Thuc = _a.Thuc - b.Thuc;
	Hieu.Ao = _a.Ao - b.Ao;
	return Hieu;
}
SOPHUC SOPHUC::operator*(SOPHUC b)
{
	SOPHUC Tich;
	Tich.Thuc = this->Thuc * b.Thuc - this->Ao * b.Ao;
	Tich.Ao = this->Thuc * b.Ao + this->Ao * b.Thuc;
	return Tich;
}
SOPHUC operator*(float a, SOPHUC b) {
	SOPHUC Tich;
	SOPHUC _a(a);
	Tich.Thuc = _a.Thuc * b.Thuc - _a.Ao * b.Ao;
	Tich.Ao = _a.Thuc * b.Ao + _a.Ao * b.Thuc;
	return Tich;
}
SOPHUC SOPHUC::operator/(SOPHUC b)
{
	int MSC;
	MSC = pow(b.Thuc, 2) + pow(b.Ao, 2);
	SOPHUC Thuong;
	Thuong.Thuc = (this->Thuc * b.Thuc + this->Ao * b.Ao) / MSC;
	Thuong.Ao = (b.Thuc * this->Ao - this->Thuc * b.Ao) / MSC;
	return Thuong;
}
SOPHUC operator/(float a, SOPHUC b) {
	int MSC;
	SOPHUC _a(a);
	MSC = pow(b.Thuc, 2) + pow(b.Ao, 2);
	SOPHUC Thuong;
	Thuong.Thuc = (_a.Thuc * b.Thuc + _a.Ao * b.Ao) / MSC;
	Thuong.Ao = (b.Thuc * _a.Ao - _a.Thuc * b.Ao) / MSC;
	return Thuong;
}
float SOPHUC::Module()
{
	float modun;
	modun = sqrt(pow(Thuc, 2) + pow(Ao, 2));
	return modun;
}
bool operator==(SOPHUC a, SOPHUC b)
{
	if (a.Thuc == b.Thuc && a.Ao == b.Ao)
		return true;
	return false;
}
bool operator!=(SOPHUC a, SOPHUC b)
{
	if (a.Thuc != b.Thuc || a.Ao != b.Ao)
		return true;
	return false;
}
bool operator>(SOPHUC a, SOPHUC b)
{
	if (a.Module() > b.Module())
		return true;
	return false;
}
bool operator>=(SOPHUC a, SOPHUC b)
{
	if (a.Module() >= b.Module())
		return true;
	return false;
}
bool operator<(SOPHUC a, SOPHUC b)
{
	if (a.Module() < b.Module())
		return true;
	return false;
}
bool operator<=(SOPHUC a, SOPHUC b)
{
	if (a.Module() <= b.Module())
		return true;
	return false;
}