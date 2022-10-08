#include "NgheSi.h"

void NgheSi::Nhap()
{
	People::Nhap();
	cout << "Nhap linh vuc hoat dong: ";
	rewind(stdin);
	getline(cin, linhvuc);
}
void NgheSi::Xuat()
{
	People::Xuat();
	cout << "\nLinh vuc hoat dong: " << linhvuc;
}