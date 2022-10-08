#include "CongNhan.h"

void CongNhan::Nhap()
{
	People::Nhap();
	cout << "Nhap so nam lam viec: ";
	cin >> sonamdalam;
}
void CongNhan::Xuat()
{
	People::Xuat();
	cout << "\nSo nam da lam viec la: " << sonamdalam;
}