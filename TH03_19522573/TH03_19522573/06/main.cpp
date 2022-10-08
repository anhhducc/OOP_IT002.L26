#include "CString.h"

int main()
{
	CString a, b, c;
	a.Nhap();
	a.Xuat();
	cout << endl;
	b.Nhap();
	b.Xuat();
	c = a + b;
	cout << "\n2 chuoi da nhap: ";
	c.Xuat();
	cout << "\nCheck if string a = string b ?" << endl;
	if (a == b)
		cout << "True";
	else
		cout << "False";

	system("pause");
	return 0;
}