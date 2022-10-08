#include "SOPHUC.h"

void SOPHUC::Nhap()
{
	cout << "Nhap phan thuc:";
	cin >> this->iThuc;
	cout << "Nhap phan ao:";
	cin >> this->iAo;
	cout << endl;
}
void SOPHUC::Xuat()
{
	cout << this->iThuc << "+" << this->iAo << "i" << endl;
}
SOPHUC SOPHUC::Cong(SOPHUC b)
{
	SOPHUC Tong;
	Tong.iThuc = this->iThuc + b.iThuc;
	Tong.iAo = this->iAo + b.iAo;
	return Tong;
}
SOPHUC SOPHUC::Tru(SOPHUC b)
{
	SOPHUC Hieu;
	Hieu.iThuc = this->iThuc - b.iThuc;
	Hieu.iAo = this->iAo - b.iAo;
	return Hieu;
}
SOPHUC SOPHUC::Nhan(SOPHUC b)
{
	SOPHUC Tich;
	Tich.iThuc = this->iThuc * b.iThuc - this->iAo * b.iAo;
	Tich.iAo = this->iThuc * b.iAo + this->iAo * b.iThuc;
	return Tich;
}
SOPHUC SOPHUC::Chia(SOPHUC b)
{
	int MC;
	MC = pow(b.iThuc, 2) + pow(b.iAo, 2);
	SOPHUC Thuong;
	Thuong.iThuc = (this->iThuc * b.iThuc + this->iAo * b.iAo) / MC;
	Thuong.iAo = (b.iThuc * this->iAo - this->iThuc * b.iAo) / MC;
	return Thuong;
}
