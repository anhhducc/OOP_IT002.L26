#pragma once
#include"HeDaoTao.h"
#include"DaiHoc.h"
#include"CaoDang.h"

class ListHeDaoTao
{
private:
	int n;
	HeDaoTao** arr;
public:
	void Nhap()
	{
		cout << "Nhap so luong sinh vien: ";
		cin >> n;
		arr = new HeDaoTao * [n];
		for (int i = 0; i < n; i++)
		{
			int flag;
			cout << "\n1. Sinh vien he Dai hoc.\n2. Sinh vien he Cao dang.";
			cout << "\nNhap loai doi tuong: ";
			cin >> flag;
			switch (flag)
			{
			case 1:
				arr[i] = new DaiHoc();
				arr[i]->Nhap();
				break;
			case 2:
				arr[i] = new CaoDang();
				arr[i]->Nhap();
				break;
			}
		}
	}

	void Xuat()
	{
		cout << "\n------------------------------------";
		cout << "\nDanh sach co " << n << " sinh vien.";
		for (int i = 0; i < n; i++)
		{
			switch (arr[i]->loai)
			{
			case 1:
				cout << "\nThong tin sinh vien he dai hoc: ";
				arr[i]->Xuat();
				cout << endl;
				break;
			case 2:
				cout << "\nThong tin sinh vien he cao dang: ";
				arr[i]->Xuat();
				cout << endl;
				break;
			}
		}
	}

	void TotNghiepCD()
	{
		for (int i = 0; i < n; i++)
		{
			if (arr[i]->loai == 2)
			{
				if (arr[i]->getSoTC() >= 120 && arr[i]->getDTB() >= 5 && ((CaoDang*)arr[i])->getDiemTN() >= 5)
				{
					cout << "\nHo ten: " << arr[i]->getHoTen();
					cout << "\nMSSV: " << arr[i]->getMSSV();
					cout << endl;
				}
			}
		}
	}

	void TotNghiepDH()
	{
		for (int i = 0; i < n; i++)
		{
			if (arr[i]->loai == 1)
			{
				if (arr[i]->getSoTC() >= 170 && arr[i]->getDTB() >= 5 && ((DaiHoc*)arr[i])->getDiemLV() >= 5)
				{
					cout << "\nHo ten: " << arr[i]->getHoTen();
					cout << "\nMSSV: " << arr[i]->getMSSV();
					cout << endl;
				}
			}
		}
	}
};