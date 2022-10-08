#include<iostream>
#include<cmath>

using namespace std;

class CTime
{
private:
	int hours;
	int mins;
	int secs;

public:
	void Nhap();
	void Xuat();
	CTime Tong(int);
	CTime Hieu(int);
	CTime Hieu_ham(CTime);
	CTime Tang_1();
	CTime Giam_1();
};