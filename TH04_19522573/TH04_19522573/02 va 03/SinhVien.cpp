#include "SinhVien.h"

void SinhVien::Nhap()
{
	People::Nhap();
	cout << "Nhap nam dang hoc hien tai: ";
	cin >> nam;
}
void SinhVien::Xuat()
{
	People::Xuat();
	cout << "\nLa sinh vien nam: " << nam;
}