#include <iostream>
#include <cmath>
using namespace std;

#pragma once
class DATHUC
{
private:
	double* arr;
	int bac;
public:
	DATHUC(int _bac = 0)
	{
		this->bac = _bac;
		arr = new double[bac];
	}
	void Nhap();
	void Xuat();
	DATHUC operator+ (DATHUC b);
	DATHUC operator- (DATHUC b);
};

