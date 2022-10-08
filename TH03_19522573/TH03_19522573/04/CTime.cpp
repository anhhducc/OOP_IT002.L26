#include "CTime.h"
CTime::CTime(CTime& newT)
{
	Hour = newT.Hour;
	Min = newT.Min;
	Sec = newT.Sec;
}
void CTime::TimeChuan()
{
	int SumSec;
	SumSec = Hour * 3600 + Min * 60 + Sec;
	if (SumSec > 86400)
	{
		SumSec = SumSec - 86400;
		Hour = SumSec / 3600;
		Min = (SumSec - 3600 * Hour) / 60;
		Sec = SumSec - 3600 * Hour - Min * 60;
	}
	else
		if (SumSec < 0)
		{
			SumSec = 86400 + SumSec;
			Hour = SumSec / 3600;
			Min = (SumSec - 3600 * Hour) / 60;
			Sec = SumSec - 3600 * Hour - Min * 60;
		}
		else
		{
			Hour = SumSec / 3600;
			Min = (SumSec - 3600 * Hour) / 60;
			Sec = SumSec - 3600 * Hour - Min * 60;
		}
}
CTime operator+(CTime a, int x)
{
	CTime _x(0, 0, x);
	CTime sum;
	sum.Hour = a.Hour + _x.Hour;
	sum.Min = a.Min + _x.Min;
	sum.Sec = a.Sec + _x.Sec;
	sum.TimeChuan();
	return sum;
}
CTime operator-(CTime a, int x)
{
	CTime _x(0, 0, x);
	CTime hieu;
	hieu.Hour = a.Hour - _x.Hour;
	hieu.Min = a.Min - _x.Min;
	hieu.Sec = a.Sec - _x.Sec;
	hieu.TimeChuan();
	return hieu;
}
CTime CTime::operator-(CTime b)
{
	CTime hieu;
	hieu.Hour = Hour - b.Hour;
	hieu.Min = Min - b.Min;
	hieu.Sec = Sec - b.Sec;
	hieu.TimeChuan();
	return hieu;
}
CTime CTime::operator++(int)
{
	CTime c = *this;
	this->Sec += 1;
	return c;
}
CTime CTime::operator--(int)
{
	CTime c = *this;
	this->Sec += 1;
	return c;
}