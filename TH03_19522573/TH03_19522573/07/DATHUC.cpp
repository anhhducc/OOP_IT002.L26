#include "DATHUC.h"
void DATHUC::Nhap()
{
	cout << "Nhap bac da thuc: ";
	cin >> this->bac;
	arr = new double[bac + 1];
	for (int i = 0; i < bac + 1; i++)
	{
		cout << "Nhap he so x^" << i << ": ";
		cin >> arr[i];
	}
	cout << endl;
}
void DATHUC::Xuat()
{
	for (int i = bac + 1; i > 0; i--)
	{
		cout << arr[i - 1] << "x^" << i - 1 << " + ";
	}
	cout << endl;
	cout << endl;
}
DATHUC DATHUC::operator+(DATHUC b)
{
	int c_bac;
	if (this->bac > b.bac)
		c_bac = this->bac;
	else if (this->bac < b.bac)
		c_bac = b.bac;
	else
		c_bac = b.bac = this->bac;
	DATHUC c(c_bac);
	if (this->bac > b.bac)
	{
		for (int i = 0; i < b.bac + 1; i++)
		{
			c.arr[i] = b.arr[i] + this->arr[i];
		}
		for (int j = b.bac + 1; j < this->bac + 1; j++)
		{
			c.arr[j] = this->arr[j];
		}
	}
	else if (this->bac < b.bac)
	{
		for (int i = 0; i < this->bac + 1; i++)
		{
			c.arr[i] = b.arr[i] + this->arr[i];
		}
		for (int j = this->bac + 1; j < b.bac + 1; j++)
		{
			c.arr[j] = b.arr[j];
		}
	}
	else
	{
		for (int i = 0; i < c.bac + 1; i++)
		{
			c.arr[i] = this->arr[i] + b.arr[i];
		}
	}
	return c;
}
DATHUC DATHUC::operator-(DATHUC b)
{
	int c_bac;
	if (this->bac > b.bac)
		c_bac = this->bac;
	else if (this->bac < b.bac)
		c_bac = b.bac;
	else
		c_bac = b.bac = this->bac;
	DATHUC c(c_bac);
	if (this->bac > b.bac)
	{
		for (int i = 0; i < b.bac + 1; i++)
		{
			c.arr[i] = -b.arr[i] + this->arr[i];
		}
		for (int j = b.bac + 1; j < this->bac + 1; j++)
		{
			c.arr[j] = this->arr[j];
		}
	}
	else if (this->bac < b.bac)
	{
		for (int i = 0; i < this->bac + 1; i++)
		{
			c.arr[i] = -b.arr[i] + this->arr[i];
		}
		for (int j = this->bac + 1; j < b.bac + 1; j++)
		{
			c.arr[j] = b.arr[j];
		}
	}
	else
	{
		for (int i = 0; i < c.bac + 1; i++)
		{
			c.arr[i] = this->arr[i] - b.arr[i];
		}
	}
	return c;
}