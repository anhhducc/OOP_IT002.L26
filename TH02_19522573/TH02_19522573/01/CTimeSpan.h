#include <iostream>
#include <cmath>

using namespace std;

class CTimeSpan
{
private:
    int secs;
public:
    void Nhap();
    void Xuat();
    CTimeSpan Tong(CTimeSpan);
    CTimeSpan Hieu(CTimeSpan);
    int Equal(CTimeSpan);
    int Diff(CTimeSpan);
    int Big(CTimeSpan);
    int Big_equal(CTimeSpan);
    int Small(CTimeSpan);
    int Small_equal(CTimeSpan);
};