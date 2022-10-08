#include "DATHUC.h"


void DATHUC::Nhap() 
{
	cout << "Nhap vao bac da thuc: ";
	cin >> n;
	data = new int[n + 1];
	for (int i = n; i >= 0; i--) 
	{
		cout << "Nhap he so x^" << i << ": ";
		cin >> data[i]; 
	}
	cout << endl;
}

void DATHUC::Xuat() 
{

	for (int i = n; i >= 0; i--) {
		if (i > 0) 	
			cout << data[i] << "x^" << i << " + ";
		else cout << data[i];
	}
	cout << endl;
}

void DATHUC::Cong(DATHUC d1, DATHUC d2) 
{
	if (d1.n > d2.n) {
		n = d1.n;
		data = new int[n + 1];
		for (int i = n; i > d2.n; i--)	
			data[i] = d1.data[i];
		for (int i = d2.n; i >= 0; i--)	
			data[i] = d1.data[i] + d2.data[i];
	}
	else 
	{
		n = d2.n;
		data = new int[n + 1];
		for (int i = n; i > d1.n; i--)	
			data[i] = d2.data[i];
		for (int i = d1.n; i >= 0; i--)	
			data[i] = d1.data[i] + d2.data[i];
	}
}

void DATHUC::Tru(DATHUC d1, DATHUC d2) 
{
	while (d1.n != d2.n) 
	{
		if (d1.n > d2.n)
			for (int i = d2.n + 1; i <= d1.n; i++)	
				d2.n++, d2.data[i] = 0;
		if (d2.n > d1.n)
			for (int i = d1.n + 1; i <= d2.n; i++)	
				d1.n++, d1.data[i] = 0;
	}
	n = d1.n;
	cout << endl;
	data = new int[n + 1];
	for (int i = n; i >= 0; i--)	
		data[i] = d1.data[i] - d2.data[i];
}

void DATHUC::Nhan(DATHUC d1, DATHUC d2) 
{
	n = d1.n + d2.n;
	data = new int[n + 1];
	for (int i = 0; i < n; i++)	
		data[i] = 0;
	for (int i = d1.n; i >= 0; i--)
		for (int j = d2.n; j >= 0; j--)
			for (int k = n; k >= 0; k--)
				if (i + j == k) 	
					data[k] += d1.data[i] * d2.data[j];
}

void DATHUC::Chia(DATHUC d1, DATHUC d2)
{

}