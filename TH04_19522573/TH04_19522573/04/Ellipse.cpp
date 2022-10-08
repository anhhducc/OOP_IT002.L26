#include "Ellipse.h"

Ellipse::Ellipse() 
{
    Nhapx(0);
    Nhapy(0);
    NhapTrucDai(0);
    NhapTrucNgan(0);
}
Ellipse::Ellipse(double x, double y, double td, double tn) 
{
    Nhapx(x);
    Nhapy(y);
    NhapTrucDai(td);
    NhapTrucNgan(tn);
}
Ellipse::~Ellipse() 
{
}

void Ellipse::Nhapx(double x) 
{
    x = x;
}
void Ellipse::Nhapy(double y) 
{
    y = y;
}
void Ellipse::NhapTrucDai(double td) 
{
    TrucDai = td;
}
void Ellipse::NhapTrucNgan(double tn) 
{
    TrucNgan = tn;
}
void Ellipse::Nhap() 
{
    cout << "\nNhap vao hinh Ellipse: ";
    cout << "\nNhap toa do tam: ";
    cout << "\nx = ";
    double x;
    cin >> x;
    Nhapx(x);

    cout << "y = ";
    double y;
    cin >> y;
    Nhapy(y);

    cout << "Nhap Truc dai: ";
    double td;
    cin >> td;
    NhapTrucDai(td);

    cout << "Nhap Truc ngan: ";
    double tn;
    cin >> tn;
    NhapTrucNgan(tn);
}
void Ellipse::Xuat() 
{
    cout << "Ellipse vua nhap: ";
    cout << "\nToa do tam: " << "(" << Getx() << "," << Gety() << ")";
    cout << "\nTruc dai = " << GetTrucDai();
    cout << "\nTruc ngan = " << GetTrucNgan() << endl;
}
