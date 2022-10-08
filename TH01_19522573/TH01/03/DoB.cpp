
#include "DoB.h"

void DoB::Nhap()
{
	cout << "Nhap ngay/thang/nam sinh:" << endl;
	cin >> this->iNgay >> this->iThang >> this->iNam;
}
void DoB::Xuat()
{
	cout << "Ngay/thang/nam sinh: " << this->iNgay << "/" << this->iThang << "/" << this->iNam << endl;
}

