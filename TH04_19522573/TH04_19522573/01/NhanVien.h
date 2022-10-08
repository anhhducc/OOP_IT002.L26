#pragma once
#include <iostream>
#include <string>
using namespace std;

class NhanVien
{
protected:
	string hoten;
	int ngay, thang, nam;
public:
	NhanVien(void);
	~NhanVien(void);
	virtual void Nhap();
	virtual void Xuat();
	virtual long Luong();
};

