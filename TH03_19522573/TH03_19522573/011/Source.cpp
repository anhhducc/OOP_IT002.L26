#include <iostream>
#include <conio.h>
using namespace std;

std::basic_ostream<char, std::char_traits<char>>
& Any = cout << "Entering the Hello program saying...\nHello, world.\nThen exiting...\n";
int c = _getch();

#if defined Something
main()
{
    cout << "Hello, world.\n";
}

#else
#define Something

void main()
{
}
#endif