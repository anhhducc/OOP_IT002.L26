#include "CTime.h"

int main()
{
	CTime a, b, kq;
	a.Nhap();
	b.Nhap();
	a.Xuat();
	b.Xuat();

	kq = a.Tong(10);
	kq.Xuat();

	kq = a.Hieu(10);
	kq.Xuat();

	kq = a.Hieu_ham(b);
	kq.Xuat();

	kq = a.Tang_1();
	kq.Xuat();

	kq = a.Giam_1();
	kq.Xuat();

	return 1;
}