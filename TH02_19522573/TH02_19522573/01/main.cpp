#include "CTimeSpan.h"

int main()
{
	CTimeSpan c, d, kq_TS;

	c.Nhap();
	d.Nhap();
	c.Xuat();
	d.Xuat();

	kq_TS = c.Tong(d);
	kq_TS.Xuat();

	kq_TS = c.Hieu(d);
	kq_TS.Xuat();

	c.Equal(d);

	c.Diff(d);

	c.Big(d);

	c.Big_equal(d);

	c.Small(d);

	c.Small_equal(d);
	

	system("pause");
	return 0;
}