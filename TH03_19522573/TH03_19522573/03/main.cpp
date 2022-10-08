#include "CTimeSpan.h"


int main()
{
	CTimeSpan a, b;
	a.Nhap();
	b.Nhap();
	cout << "\nCong thoi gian a+b" << endl;
	CTimeSpan c, d;
	c = a + b;
	c.Xuat();
	cout << "\nTru thoi gian a-b" << endl;
	d = a - b;
	d.Xuat();
	bool e;
	e = a < b;
	cout << "\nSo sanh thoi gian a<b ?" << endl;
	cout << e << endl;


	system("pause");
	return 0;

}