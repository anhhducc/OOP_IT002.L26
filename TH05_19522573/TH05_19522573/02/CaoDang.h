#pragma once
#include "HeDaoTao.h"
class CaoDang :
    public HeDaoTao
{
private:
	float DiemTN;
public:
	void Nhap();
	void Xuat();
	float getDiemTN();
	CaoDang()
	{
		loai = 2;
	}
};

