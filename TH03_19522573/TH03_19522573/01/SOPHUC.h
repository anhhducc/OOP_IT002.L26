#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


#pragma once
class SOPHUC
{
private:
	float Thuc, Ao;
public:
	SOPHUC(float a = 0, float b = 0)
	{
		Thuc = a;
		Ao = b;
	}
	SOPHUC(SOPHUC& a)
	{
		Thuc = a.Thuc;
		Ao = a.Ao;
	}
	float Module();
	SOPHUC operator+(SOPHUC b);
	friend SOPHUC operator+(float a, SOPHUC b);
	SOPHUC operator-(SOPHUC b);
	friend SOPHUC operator-(float a, SOPHUC b);
	SOPHUC operator*(SOPHUC b);
	friend SOPHUC operator*(float a, SOPHUC b);
	SOPHUC operator/(SOPHUC b);
	friend SOPHUC operator/(float a, SOPHUC b);
	friend bool operator==(SOPHUC a, SOPHUC b);
	friend bool operator!=(SOPHUC a, SOPHUC b);
	friend bool operator>(SOPHUC a, SOPHUC b);
	friend bool operator>=(SOPHUC a, SOPHUC b);
	friend bool operator<(SOPHUC a, SOPHUC b);
	friend bool operator<=(SOPHUC a, SOPHUC b);
	friend istream& operator>> (istream& is, SOPHUC& a)
	{
		cout << "Nhap phan thuc: ";
		is >> a.Thuc;
		cout << "Nhap phan ao: ";
		is >> a.Ao;
		cout << endl;
		return is;
	}
	friend ostream& operator<< (ostream& os, SOPHUC& a)
	{
		os << "Phan thuc:";
		os << a.Thuc; 
		os << "   Phan ao:";
		os << a.Ao << endl;
		return os;
	}
};


