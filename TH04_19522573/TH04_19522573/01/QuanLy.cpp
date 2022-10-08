#include "QuanLy.h"
#include "NVSanXuat.h"
#include "NVVanPhong.h"

QuanLy::QuanLy(void)
{
	n = 0;
	x = new NhanVien * [1000];
}


QuanLy::~QuanLy(void)
{
	delete[]x;
}

void QuanLy::Nhap()
{
	int k;
	for (int i = 0;; i++)
	{
		do 
		{
			cout << "\nChon loai Nhan Vien: \n1. Van Phong\n2. San Xuat\n0. End\n";
			cin >> k;
			if (k != 1 && k != 2 && k != 0) cout << "\nLua chon ko hop le, moi nhap lai: \n";
		} while (k != 1 && k != 2 && k != 0);
		if (k == 0) return;
		else if (k == 1)
		{
			n++;
			x[i] = new NVVanPhong;
		}
		else
		{
			n++;
			x[i] = new NVSanXuat;
		}
		x[i]->Nhap();
	}
}

void QuanLy::Xuat()
{
	cout << endl;
	cout << "So nhan vien: " << n << endl;
	for (int i = 0; i < n; i++)
	{
		cout << endl;
		x[i]->Xuat();
		cout << "Luong = " << x[i]->Luong();
		cout << endl;
	}
}