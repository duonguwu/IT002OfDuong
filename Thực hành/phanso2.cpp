#include <iostream>
#include <math.h>
using namespace std;

class PhanSo{
private:
    int Tu;
    int Mau;
public:
    PhanSo(){

    }
    PhanSo(int Tu, int Mau){
        this->Tu = Tu;
        this->Mau = Mau;
    }
    void Nhap(){
        cout << "Nhap lan luot Tu va Mau cua phan so: ";
        cin >> Tu >> Mau;
    }
    int USCLN(int m, int d){
        if(m==0) return d;
        return USCLN(d%m,m);
    }
    void RutGon(){
        int u;
        u = USCLN(Tu, Mau);
        Tu=Tu/u;
        Mau=Mau/u;
    }
    void Xuat(){
        cout << "Phan so sau khi rut gon la: ";
        if (Tu == Mau) 
            cout << 1 << endl;
        else if (Mau < 0){
            if (Mau == -1) 
                cout << -1;
            else 
                cout << (-1)*Tu <<"/" << Mau;
        }
        else if (Mau == 1) 
            cout << Tu << endl;
        else if (Tu == 0) 
            cout << 0 << endl;
        else
            cout << Tu << "/" << Mau << endl;
    }
};

int main(){
    PhanSo x;
    x.Nhap();
    x.RutGon();
    x.Xuat();
}