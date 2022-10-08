#include "PHANSO.h"
int main()
{
	PHANSO a, b;
	a.Nhap();
	b.Nhap();
	a.Cong(b).Xuat();
	a.Tru(b).Xuat();
	a.Nhan(b).Xuat();
	a.Chia(b).Xuat();

	return 0;
}