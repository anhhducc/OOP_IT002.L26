#pragma once
#include "People.h"
class SinhVien :
    public People
{
private:
	int nam;
public:
	SinhVien()
	{
		loai = 2;
	}
	void Nhap();
	void Xuat();
};

