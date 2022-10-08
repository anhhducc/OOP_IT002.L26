#include "CDate.h"

int main()
{
	CDate N;
	cout << "Nhap vao ngay/thang/nam: \n";
	N.Nhap();

	while (!(N.KTDate()))
	{
		cout << "Nhap sai, moi nhap lai: \n";
		N.Nhap();
	}

	cout << "Date vua nhap la: ";
	N.Xuat();

	if (N.KTNhuan())
		cout << "\nLa nam nhuan";
	else
		cout << "\nKhong phai nam nhuan";

	system("pause");

	return 1;
}