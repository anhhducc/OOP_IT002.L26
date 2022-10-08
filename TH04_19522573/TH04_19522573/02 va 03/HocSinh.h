#pragma once
#include "People.h"
class HocSinh :
    public People
{
private:
	int lop;
public:
	HocSinh()
	{
		loai = 1;
	}
	void Nhap();
	void Xuat();
};

