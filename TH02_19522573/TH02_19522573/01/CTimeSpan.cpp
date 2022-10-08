#include "CTimeSpan.h"

void CTimeSpan::Nhap()
{
    cout << "Nhap vao giay:";
    cin >> secs;
}
void CTimeSpan::Xuat()
{
    cout << "\nSecs :";
    cout << secs;
}

CTimeSpan CTimeSpan::Tong(CTimeSpan a)
{
    CTimeSpan x;
    x.secs = secs + a.secs;
        return x;
}
CTimeSpan CTimeSpan::Hieu(CTimeSpan a)
{
    CTimeSpan x;
    x.secs = secs - a.secs;
        return x;
}
int CTimeSpan::Equal(CTimeSpan a)
{
   int i = 0;
    if (a.secs == secs)
        i = 1;
    return i;
}
int CTimeSpan::Diff(CTimeSpan a)
{
    int i = 0;
    if (a.secs != secs)
        i = 1;
    return i;
}
int CTimeSpan::Big(CTimeSpan a)
{
    int i = 0;
    if (secs > a.secs)
        i = 1;
    return i;
}
int CTimeSpan::Big_equal(CTimeSpan a)
{
    int i = 0;
    if (secs >= a.secs)
        i = 1;
    return i;
}

int CTimeSpan::Small(CTimeSpan a)
{
    int i = 0;
    if (secs < a.secs)
        i = 1;
    return i;
}

int CTimeSpan::Small_equal(CTimeSpan a)
{
    int i = 0;
    if (secs <= a.secs)
        i = 1;
    return i;
}
