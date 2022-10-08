#pragma once
#include <iostream>
#include <string>
#include "Date.h"

using namespace std;

class People
{
protected:
	string hoten;
	Date ngay;
public:
	int loai;
	void Nhap();
	void Xuat();
};

