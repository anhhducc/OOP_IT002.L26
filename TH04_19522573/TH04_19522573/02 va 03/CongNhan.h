#pragma once
#include "People.h"
class CongNhan :
    public People
{
private:
	int sonamdalam;
public:
	CongNhan() {
		loai = 3;
	}
	void Nhap();
	void Xuat();
};

