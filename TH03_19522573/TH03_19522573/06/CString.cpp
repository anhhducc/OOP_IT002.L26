#include "CString.h"

void CString::Nhap()
{
	cout << "\Nhap so ki tu cua chuoi: ";
	cin >> num;
	arr = new char[num];
	for (int i = 0; i < num; i++)
	{
		cout << "Nhap ki tu thu " << i << ": ";
		cin >> arr[i];
	}
}
void CString::Xuat()
{
	for (int i = 0; i < num; i++)
	{
		cout << arr[i];
	}
	cout << endl;
	cout << endl;
}
CString CString::operator+(CString b)
{
	int j = 0;
	int c_num;
	c_num = num + b.num;
	CString c(c_num);
	for (int i = 0; i < this->num; i++)
	{
		c.arr[i] = this->arr[i];
	}
	for (int j = 0; j < b.num; j++)
	{
		c.arr[this->num + j] = b.arr[j];
	}
	return c;
}
CString CString::operator=(CString b)
{
	return this->GanChuoi(b);
}
CString CString::GanChuoi(CString b)
{
	this->num = b.num;
	for (int i = 0; i < b.num; i++)
	{
		this->arr[i] = b.arr[i];
	}
	return *this;
}
int CString::SumChar()
{
	int value = 0;
	for (int i = 0; i < this->num; i++)
	{
		value += this->arr[i];
	}
	return value;
}
bool operator==(CString a, CString b)
{
	if (a.SumChar() == b.SumChar())
		return true;
	return false;
}
bool operator>(CString a, CString b)
{
	if (a.SumChar() > b.SumChar())
		return true;
	return false;
}
bool operator<(CString a, CString b)
{
	if (a.SumChar() < b.SumChar())
		return true;
	return false;
}