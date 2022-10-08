#include "DATHUC.h"

int main() 
{
	
	DATHUC a, b, Tong, Hieu, Tich;
	a.Nhap();
	b.Nhap();
	Tong.Cong(a, b);
	Hieu.Tru(a, b);
	Tich.Nhan(a, b);

	cout << "Tong 2 da thuc la: " << endl;
	Tong.Xuat();

	cout << "Hieu 2 da thuc la: " << endl;
	Hieu.Xuat();

	cout << "Tich 2 da thuc la: " << endl;
	Tich.Xuat();
	

	return 0;
}
