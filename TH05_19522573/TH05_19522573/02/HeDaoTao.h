#pragma once
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class HeDaoTao
{
protected:
	string MSSV;
	string HoTen;
	string DiaChi;
	int SoTC;
	float DTB;
public:
	int loai;

	int getSoTC()
	{
		return SoTC;
	}

	string getHoTen()
	{
		return HoTen;
	}

	string getMSSV()
	{
		return MSSV;
	}

	float getDTB()
	{
		return DTB;
	}

	virtual void Nhap()
	{
		rewind(stdin);
		cout << "\nNhap MSSV: ";
		getline(cin, MSSV);
		cout << "Nhap ho ten: ";
		getline(cin, HoTen);
		cout << "Nhap dia chi: ";
		getline(cin, DiaChi);
		cout << "Nhap so tin chi: ";
		cin >> SoTC;
		cout << "Nhap diem trung binh: ";
		cin >> DTB;
	}

	virtual void Xuat()
	{
		cout << "\nMSSV: " << MSSV;
		cout << "\nHo ten: " << HoTen;
		cout << "\nDia chi: " << DiaChi;
		cout << "\nSo tin chi: " << SoTC;
		cout << "\nDiem trung binh: " << DTB;
	}
};

