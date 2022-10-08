#include "CaoDang.h"
void CaoDang::Nhap()
{
	HeDaoTao::Nhap();
	cout << "Nhap diem tot nghiep: ";
	cin >> DiemTN;
}
void CaoDang::Xuat()
{
	HeDaoTao::Xuat();
	cout << "\nDiem tot nghiep: " << DiemTN;
}
float CaoDang::getDiemTN()
{
	return DiemTN;
}