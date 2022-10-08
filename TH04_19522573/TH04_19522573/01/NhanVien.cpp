#include "NhanVien.h"

NhanVien::NhanVien(void)
{
}

NhanVien::~NhanVien(void)
{
}

void NhanVien::Nhap()
{
	cin.ignore();
	cout << "\nNhap ho ten nhan vien: ";
	getline(std::cin,hoten);
	cout << "Nhap ngay thang nam sinh: " << endl;
	cin >> ngay >> thang >> nam;
}

void NhanVien::Xuat()
{
	cout << "Ho ten: " << hoten << endl;
	cout<< "Ngay sinh: " << ngay << "/" << thang << "/" << nam << endl;
}

long NhanVien::Luong()
{
	return 0;
}