#pragma once
#include"NhanVien.h"
#include<vector>

class QuanLy
{
private:
	NhanVien** x;
	int n;
public:
	QuanLy(void);
	~QuanLy(void);
	void Nhap();
	void Xuat();
};

