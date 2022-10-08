#include <iostream>
#include <cmath>

using namespace std;

#pragma once

class DATHUC
{
private:
	int n;
	int* data;

public:
	void Nhap();
	void Xuat();
	void Cong(DATHUC, DATHUC);
	void Tru(DATHUC, DATHUC);
	void Nhan(DATHUC, DATHUC);
	void Chia(DATHUC, DATHUC);
};



