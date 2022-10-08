#include "Candidate.h"


void Candidate::Nhap()
{
	cout << "Nhap MSSV:";
	getline(cin, sMaso);
	cout << "Nhap ho ten:";
	getline(cin, sTen);
	dBirth.Nhap();
	cout << "Nhap diem theo thu tu Toan/Van/Anh: " << endl;
	cin >> setprecision(2) >> fToan >> fVan >> fAnh;
	cout << endl;
}
void Candidate::Xuat()
{
	cout << "Ma so: " << sMaso << endl;
	cout << "Ho va ten: " << sTen << endl;
	dBirth.Xuat();
	cout << "Diem Toan/Van/Anh: " << fToan << "/" << fVan << "/" << fAnh << endl;
}float Candidate::TongDiem()
{
	float Tong;
	Tong = this->fToan + this->fVan + this->fAnh;
	return Tong;
}
