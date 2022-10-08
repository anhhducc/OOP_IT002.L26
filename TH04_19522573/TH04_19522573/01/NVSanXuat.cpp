#include "NVSanXuat.h"

NVSanXuat::NVSanXuat(void)
{
}


NVSanXuat::~NVSanXuat(void)
{
}

void NVSanXuat::Nhap()
{
	NhanVien::Nhap();
	cout << "Nhap luong can ban: "; cin >> LuongCanBan;
	cout << "Nhap so san pham: "; cin >> SoSanPham;
}

void NVSanXuat::Xuat()
{
	NhanVien::Xuat();
	cout << "Luong can ban: " << LuongCanBan << endl << "So san pham : " << SoSanPham << endl;
}

long NVSanXuat::Luong()
{
	return LuongCanBan + SoSanPham * 5000;
}