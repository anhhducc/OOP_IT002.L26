#include <iostream>
#include <string>
using namespace std;

#pragma once
class CString
{
private:
	char* arr;
	int num;
public:
	CString(int _num = 1)
	{
		this->num = _num;
		arr = new char[_num];
	}
	void Nhap();
	void Xuat();
	CString GanChuoi(CString b);
	CString operator+(CString b);
	CString operator=(CString b);
	friend bool operator==(CString a, CString b);
	friend bool operator>(CString a, CString b);
	friend bool operator<(CString a, CString b);
	int SumChar();
};

