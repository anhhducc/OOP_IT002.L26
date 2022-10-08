#pragma once
#include "NhanVien.h"

class NVVanPhong :
   virtual public NhanVien
{
private:
	int SoNgayLamViec;
public:
	NVVanPhong(void);
	~NVVanPhong(void);
	virtual void Nhap();
	virtual void Xuat();
	virtual long Luong();
};

