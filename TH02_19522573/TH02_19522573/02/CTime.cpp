#include "CTime.h"


void CTime::Nhap()
{
	cout << "Nhap vao gio:";
	cin >> hours;
	cout << "Nhap vao phut:";
	cin >> mins;
	cout << "Nhap vao giay:";
	cin >> secs; cout << endl;
}

void CTime::Xuat()
{
	cout << "\nHours:" << hours << " ";
	cout << "Mins:" << mins << " ";
	cout << "Secs:" << secs;
	cout << endl;
}

CTime CTime::Tong(int a)
{
	CTime x;
	int hours_secs = hours * 60 * 60;
	int mins_secs = mins * 60;
	int all_secs = hours_secs + mins_secs + secs + a;

	x.hours = all_secs / (3600);
	x.mins = (all_secs - x.hours * 3600) / 60;
	x.secs = (all_secs - x.hours * 3600 - x.mins * 60);
	return x;
}

CTime CTime::Hieu(int a)
{
	CTime x;
	int hours_secs = hours * 60 * 60;
	int mins_secs = mins * 60;
	int all_secs = hours_secs + mins_secs + secs - a;

	x.hours = all_secs / (3600);
	x.mins = (all_secs - x.hours * 3600) / 60;
	x.secs = (all_secs - x.hours * 3600 - x.mins * 60);
	return x;
}

CTime CTime::Hieu_ham(CTime a)
{
	CTime x;
	int hours_secs = hours * 60 * 60;
	int mins_secs = mins * 60;
	int all_secs = hours_secs + mins_secs + secs;

	int hours_secs_a = a.hours * 60 * 60;
	int mins_secs_a = a.mins * 60;
	int all_secs_a = hours_secs_a + mins_secs_a + a.secs;

	int Time_dif = all_secs - all_secs_a;

	x.hours = Time_dif / (3600);
	x.mins = (Time_dif - x.hours * 3600) / 60;
	x.secs = (Time_dif - x.hours * 3600 - x.mins * 60);
	return x;
}

CTime CTime::Tang_1()
{
	CTime x;
	int hours_secs = hours * 60 * 60;
	int mins_secs = mins * 60;
	int all_secs = hours_secs + mins_secs + secs + 1;

	x.hours = all_secs / (3600);
	x.mins = (all_secs - x.hours * 3600) / 60;
	x.secs = (all_secs - x.hours * 3600 - x.mins * 60);
	return x;
}

CTime CTime::Giam_1()
{
	CTime x;
	int hours_secs = hours * 60 * 60;
	int mins_secs = mins * 60;
	int all_secs = hours_secs + mins_secs + secs - 1;

	x.hours = all_secs / (3600);
	x.mins = (all_secs - x.hours * 3600) / 60;
	x.secs = (all_secs - x.hours * 3600 - x.mins * 60);
	return x;
}