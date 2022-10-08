#include "CTime.h"

int main()
{
	CTime a, b, c, e, f;
	cin >> a;
	cin >> b;
	cout << "\nTru 2 thoi gian: " << endl;
	c = a - b;
	cout << c;
	cout << "\nThoi gian a + 10 giay" << endl;
	e = a + 10;
	cout << e;
	cout << "\nThoi gian b - 34 giay" << endl;
	f = b - 34;
	cout << f;
	c++;
	cout << "\nThem 1 giay sau khi tru 2 thoi gian" << endl;
	cout << c;

	system("pause");
	return 0;
}