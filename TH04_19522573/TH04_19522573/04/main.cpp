#include<typeinfo>
#include "Ellipse.h"
#include "Circle.h"
using namespace std;

void Nhap(Ellipse*& elip) 
{
    int option;
    cout << "\nNhan phim 1 -> Nhap Ellipse";
    cout << "\nNhan phim 2 -> Nhap Hinh tron" << endl;
    cin >> option;
    if (option == 1) 
    {
        elip->Ellipse::Nhap();
    }
    else 
    {
        elip = new Circle;
        elip->Nhap();
    }
}

int main() 
{
    Ellipse* elip;
    elip = new Ellipse;
    int option;
    
    do 
    {
        cout << "Nhan phim 1 -> Nhap";
        cout << "\nNhan phim 2 -> Xuat";
        cout << "\nNhan phim 3 -> Thoat" << endl;

        while (cin >> option && option != 1 && option != 2 && option != 3) 
        {
            cout << "Nhap sai, moi nhap lai: ";
        }
        switch (option)
        {
        case 1:
            Nhap(elip);
            break;
        case 2:
            if (typeid(elip).name() == typeid(Ellipse*).name()) 
            {
                elip->Ellipse::Xuat();
            }
            else 
            {
                elip->Xuat();
            }
        default:
            break;
        }
    } while (option !=3);

    system("pause");
    return 1;
}