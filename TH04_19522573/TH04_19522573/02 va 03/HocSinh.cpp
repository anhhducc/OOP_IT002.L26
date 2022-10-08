#include "HocSinh.h"

void HocSinh::Nhap()
{
	People::Nhap();
	cout << "Nhap lop: ";
	cin >> lop;
}
void HocSinh::Xuat()
{
	People::Xuat();
	cout << "\nHoc sinh lop: " << lop;
}