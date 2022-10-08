#pragma once
#include "People.h"
class CaSi :
    public People
{
private:
	int sobaihit;
public:
	CaSi()
	{
		loai = 4;
	}
	void Nhap();
	void Xuat();
};

