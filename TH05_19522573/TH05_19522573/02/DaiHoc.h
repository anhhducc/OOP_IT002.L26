#pragma once
#include "HeDaoTao.h"
class DaiHoc :
    public HeDaoTao
{
private:
	string TenLV;
	float DiemLV;
public:
	void Nhap();
	void Xuat();
	DaiHoc()
	{
		loai = 1;
	}
	int getDiemLV();
};

