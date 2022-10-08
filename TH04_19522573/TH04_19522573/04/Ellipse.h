#pragma once
#include <iostream>
using namespace std;

class Ellipse
{
private:
    double x;
    double y;
    double TrucDai;
    double TrucNgan;
public:
    Ellipse();
    Ellipse(double x, double y, double td, double tn);
    virtual~Ellipse();
    void Nhapx(double x);
    void Nhapy(double y);
    void NhapTrucDai(double td);
    void NhapTrucNgan(double tn);
    virtual void Nhap();
    double Getx() { return x; }
    double Gety() { return y; }
    double GetTrucDai() { return TrucDai; }
    double GetTrucNgan() { return TrucNgan; }
    virtual void Xuat();
};
