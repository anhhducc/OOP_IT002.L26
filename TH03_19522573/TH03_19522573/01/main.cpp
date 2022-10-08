#include "SOPHUC.h"

int main()
{
	SOPHUC a, b;
	cin >> a >> b;
	bool c;
	cout << "\nCheck if a>b ?" << endl;
	c = a > b;
	if (c == true)
		cout << "True" << endl;
	else
		cout << "False" << endl;
	SOPHUC d, e, f, g;
	cout << "\nPhep toan a+b" << endl;
	d = a + b;
	cout << d;
	cout << "\nPhep toan a-b" << endl;
	e = a - b;
	cout << e;
	cout << "\nPhep toan a*b" << endl;
	f = a * b;
	cout << f;
	cout << "\nPhep toan a/b" << endl;
	g = a / b;
	cout << g;

	system("pause");
	return 0;
}