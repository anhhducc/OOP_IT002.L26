#include "PHANSO.h"
int main()
{
	PHANSO a, b;
	cin >> a >> b;
	bool c;
	cout << "\nCheck if a>b ?" << endl;
	c = a > b;
	if (c == true)
		cout << "True" << endl;
	else
		cout << "False" << endl;
	PHANSO d, e, f, g;
	cout << "\nPhep toan a+b" << endl;
	d = a + b;
	cout << d << endl;
	cout << "\nPhep toan a-b" << endl;
	e = a - b;
	cout << e << endl;
	cout << "\nPhep toan a*b" << endl;
	f = a * b;
	cout << f << endl;
	cout << "\nPhep toan a/b" << endl;
	g = a / b;
	cout << g << endl;

	system("pause");
	return 0;
}