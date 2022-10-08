#include "TestCandidate.h"

void TestCandidate::Nhap()
{
	cout << "Nhap so luong thi sinh:";
	cin >> iSoLuong;
	cin.ignore();
	Arr = new Candidate[iSoLuong];
	for (int i = 0; i < iSoLuong; i++)
	{
		Arr[i].Nhap();
		cin.ignore();
	}
}
void TestCandidate::Xuat()
{
	for (int i = 0; i < iSoLuong; i++)
	{
		Arr[i].Xuat();
	}
}

void TestCandidate::Check()
{
	for (int i = 0; i < iSoLuong; i++)
	{
		int a = Arr[i].TongDiem();
		if (a > 15)
		{
			Arr[i].Xuat();
			cout << "Tong diem cua thi sinh >15 la: ";
			cout << setprecision(7) << Arr[i].TongDiem() << endl;
			cout << endl;
		}
	}
}
