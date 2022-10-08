#pragma once
#include "People.h"
#include"CaSi.h"
#include"NgheSi.h"
#include"CongNhan.h"
#include"HocSinh.h"
#include"SinhVien.h"
class QuanLyDanhSach
{
private:
	int n;
	People** arr;
public:
	void Menu()
	{
		cout << "\n*******DANH SACH CAC DOI TUONG*******";
		cout << "\n1. Hoc sinh";
		cout << "\n2. Sinh vien";
		cout << "\n3. Cong nhan";
		cout << "\n4. Ca si";
		cout << "\n5. Nghe si";
		cout << "\n0. Thoat.";
		cout << endl;
	}
	void Nhap()
	{
		cout << "Nhap so luong doi tuong can quan ly: ";
		cin >> n;
		arr = new People * [n];
		for (int i = 0; i < n; i++)
		{
			int flag;
			Menu();
			cout << "Nhap loai doi tuong: ";
			cin >> flag;
			switch (flag)
			{
			case 1:
				arr[i] = new HocSinh();
				((HocSinh*)arr[i])->Nhap();
				break;
			case 2:
				arr[i] = new SinhVien();
				((SinhVien*)arr[i])->Nhap();
				break;
			case 3:
				arr[i] = new CongNhan();
				((CongNhan*)arr[i])->Nhap();
				break;
			case 4:
				arr[i] = new CaSi();
				((CaSi*)arr[i])->Nhap();
				break;
			case 5:
				arr[i] = new NgheSi();
				((NgheSi*)arr[i])->Nhap();
				break;
			case 0:
				break;
			default:
				cout << "\nNhap sai, xin nhap lai: ";
			}
		}
	}
	void Xuat()
	{
		cout << "\n-------IN THONG TIN CUA DOI TUONG-------";
		cout << "\n\n";
		for (int i = 0; i < n; i++)
		{
			switch (arr[i]->loai)
			{
			case 1:
				cout << "\nDoi tuong " << i << ": ";
				((HocSinh*)arr[i])->Xuat();
				cout << endl;
				break;
			case 2:
				cout << "\nDoi tuong " << i << ": ";
				((SinhVien*)arr[i])->Xuat();
				cout << endl;
				break;
			case 3:
				cout << "\nDoi tuong " << i << ": ";
				((CongNhan*)arr[i])->Xuat();
				cout << endl;
				break;
			case 4:
				cout << "\nDoi tuong " << i << ": ";
				((CaSi*)arr[i])->Xuat();
				cout << endl;
				break;
			case 5:
				cout << "\nDoi tuong " << i << ": ";
				((NgheSi*)arr[i])->Xuat();
				cout << endl;
				break;
			}
		}

	}

};

