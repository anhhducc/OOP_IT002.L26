#include "SOPHUC.h"

int main()
{
	SOPHUC a, b;
	a.Nhap();
	b.Nhap();

	cout << "Ket qua cac phep toan cong/tru/nhan/chia la: " << endl;
	
	a.Cong(b).Xuat();
	a.Tru(b).Xuat();
	a.Nhan(b).Xuat();
	a.Chia(b).Xuat();

	system("pause");
	return 1;
}