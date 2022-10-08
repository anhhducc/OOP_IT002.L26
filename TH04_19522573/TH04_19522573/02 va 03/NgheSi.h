#pragma once
#include "People.h"
class NgheSi :
    public People
{
private:
	string linhvuc;
public:
	NgheSi()
	{
		loai = 5;
	}
	void Nhap();
	void Xuat();
};

