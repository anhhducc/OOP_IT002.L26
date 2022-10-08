#include "DaiHoc.h"
void DaiHoc::Nhap()
{
	HeDaoTao::Nhap();
	rewind(stdin);
	cout << "Nhap ten luan van: ";
	getline(cin, TenLV);
	cout << "Nhap diem luan van: ";
	cin >> DiemLV;
}
void DaiHoc::Xuat()
{
	HeDaoTao::Xuat();
	cout << "\nTen luan van: " << TenLV;
	cout << "\nDiem luan van: " << DiemLV;
}
int DaiHoc::getDiemLV()
{
	return DiemLV;
}