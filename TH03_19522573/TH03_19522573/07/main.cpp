#include "DATHUC.h"
int main()
{
	DATHUC a, b;
	cout << "Nhap da thuc 1: " << endl;
	a.Nhap();
	a.Xuat();
	cout << "\nNhap da thuc 2: " << endl;
	b.Nhap();
	b.Xuat();
	cout << "\nPhep cong 2 da thuc a+b" << endl;
	(a + b).Xuat();
	cout << "\nPhep tru 2 da thuc a-b" << endl;
	(a - b).Xuat();


	system("pause");
	return 0;
}