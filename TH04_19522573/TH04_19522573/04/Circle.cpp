#include "Circle.h"

Circle::Circle() 
{
    NhapBanKinh(0);
}
Circle::Circle(double x, double y, double r) 
    :Ellipse(x, y, r, r) 
{
    NhapBanKinh(r);
}

void Circle::Nhap() 
{
    cout << "\nNhap vao hinh tron: ";
    cout << "\nNhap toa do tam: " << endl;
    cout << "x= ";
    double x;
    cin >> x;
    Nhapx(x);
    cout << "y= ";
    double y;
    cin >> y;
    Nhapy(y);
    cout << "Nhap ban kinh:  ";
    double r;
    cin >> r;
    NhapBanKinh(r);
}
void Circle::NhapBanKinh(double r) 
{
    NhapTrucDai(r);
    NhapTrucNgan(r);
    BanKinh = r;
}

double Circle::GetBanKinh() 
{
    return BanKinh;
}
void Circle::Xuat() 
{
    cout << "Hinh tron vua nhap: ";
    cout << "Toa do tam: " << "(" << Getx() << "," << Gety() << ")";
    cout << "Ban kinh = " << GetBanKinh();
}
Circle::~Circle() 
{
}