#pragma once
#include <iostream>
using namespace std;

class Date
{
private:
	int ngay;
	int thang;
	int nam;
public:
	void Nhap()
	{
		cout << "\nNhap ngay: ";
		cin >> ngay;
		cout << "Nhap thang: ";
		cin >> thang;
		cout << "Nhap nam: ";
		cin >> nam;
	}
	void Xuat()
	{
		cout << ngay << "/" << thang << "/" << nam;
	}
};

