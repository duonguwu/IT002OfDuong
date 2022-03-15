#include <iostream>
#include <math.h>
using namespace std;

class Phanso{
private:
    int tu;
    int mau;
public:
    Phanso(){
        this->tu = 0;
        this->mau = 1;
    }
    Phanso(int tu){
        this->tu = tu;
        this->mau = 1;
    }
    Phanso(int tu, int mau){
        this->tu = tu;
        this->mau = mau;
    }
    void setTu(int tu){
        this->tu = tu;
    }
    void setMau(int mau){
        this->mau = mau;
    }
    void cong(Phanso a){
        tu = tu*a.mau + mau*a.tu;
        mau = mau*a.mau;
    }
    void tru(Phanso a){
        tu = tu*a.mau - mau*a.tu;
        mau = mau*a.mau;
    }
    void nhan(Phanso a)
    {
        tu = tu*a.tu;
        mau = mau*a.mau;
    }
    void chia(Phanso a)
    {
        tu = tu*a.mau;
        mau = mau*a.tu;
    }
    int USCLN(int m, int d){
        if(m==0) return d;
        return USCLN(d%m,m);
    }
    void rutGon(){
        int u;
        u = USCLN(tu, mau);
        tu=tu/u;
        mau=mau/u;
    }

    void nhap(){
        cout << "Nhap lan luot tu va mau cua phan so: ";
        cin >> tu >> mau;
    }
    void xuat(){
        cout << "Phan so day la: ";
        if (tu == mau) cout << 1 << endl;
        else if (mau < 0){
            if (mau == -1) cout << -1;
            else cout << (-1)*tu <<"/" << mau;
        }
        else if (mau == 1) cout << tu << endl;
        else if (tu == 0) cout << 0 << endl;
        else
        cout << tu << "/" << mau << endl;
    }
};


int main(){
    Phanso a,ps;
    Phanso b(1);
    Phanso c(1,2);
    Phanso d = c;
    Phanso e(3,8);
    Phanso x;
    x.nhap();
    x.rutGon();
    x.xuat();
    x.cong(c);
    x.rutGon();
    x.xuat();
    x.tru(b);
    a.xuat();

}