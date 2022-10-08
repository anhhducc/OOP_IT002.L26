#include "CaSi.h"

void CaSi::Nhap()
{
	People::Nhap();
	cout << "Nhap so bai hit: ";
	cin >> sobaihit;
}
void CaSi::Xuat()
{
	People::Xuat();
	cout << "\nSo bai hit: " << sobaihit;
}