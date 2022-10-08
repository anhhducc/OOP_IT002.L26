#include "People.h"

void People::Nhap()
{
	rewind(stdin);
	cout << "\nNhap ho ten: ";
	getline(cin, hoten);
	cout << "Nhap ngay thang nam sinh: ";
	ngay.Nhap();
}
void People::Xuat()
{
	cout << "\nHo ten: " << hoten;
	cout << "\nNgay sinh: ";
	ngay.Xuat();
}