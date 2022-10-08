#pragma once
#include "NhanVien.h"

class NVSanXuat :
    virtual public NhanVien
{
private:
    long LuongCanBan, SoSanPham;
public:
    NVSanXuat(void);
    ~NVSanXuat(void);
    virtual void Nhap();
    virtual void Xuat();
    virtual long Luong();
};

