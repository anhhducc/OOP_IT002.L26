#pragma once
#include "Ellipse.h"
class Circle :
    public Ellipse
{
private:
    double BanKinh;
public:
    Circle();
    Circle(double x, double y, double r);
    void Nhap();
    void NhapBanKinh(double r);
    double GetBanKinh();
    void Xuat();
    ~Circle();
};

