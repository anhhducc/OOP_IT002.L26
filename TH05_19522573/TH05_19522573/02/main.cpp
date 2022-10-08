#include "ListHeDaoTao.h"
#include "CaoDang.h"
#include "DaiHoc.h"

int main()
{
	ListHeDaoTao a;
	a.Nhap();
	a.Xuat();
	cout << "\nDS sinh vien du dieu kien tot nghiep he Cao Dang la: ";
	a.TotNghiepCD();
	cout << "\nDS sinh vien du dieu kien tot nghiep he Dai Hoc la: ";
	a.TotNghiepDH();

	system("pause");
	return 0;
}