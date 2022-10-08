#include "NVVanPhong.h"

NVVanPhong::NVVanPhong(void)
{
}

NVVanPhong::~NVVanPhong(void)
{
}

void NVVanPhong::Nhap()
{
	NhanVien::Nhap();
	cout << "Nhap so ngay lam viec: "; cin >> SoNgayLamViec;
}

void NVVanPhong::Xuat()
{
	NhanVien::Xuat();
	cout << "So ngay lam viec: " << SoNgayLamViec << endl;
}

long NVVanPhong::Luong()
{
	return SoNgayLamViec * 100000;
}