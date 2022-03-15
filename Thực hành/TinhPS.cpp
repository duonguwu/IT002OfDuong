#include <iostream>
using namespace std;

struct PhanSo
{
    int Tu, Mau;
};

void NhapPhanSo(PhanSo &a){
    cin >> a.Tu >> a.Mau;
}
void Xuat(PhanSo a){

    if (a.Tu == a.Mau) 
        cout << 1 << endl;
    else if (a.Mau < 0){
        if (a.Mau == -1) 
            cout << -1;
        else 
            cout << (-1)*a.Tu <<"/" << a.Mau;
    }
    else if (a.Mau == 1) 
        cout << a.Tu << endl;
    else if (a.Tu == 0) 
        cout << 0 << endl;
    else
        cout << a.Tu << "/" << a.Mau << endl;
}

PhanSo Cong(PhanSo a, PhanSo b){
    PhanSo c;
    c.Tu = b.Tu*a.Mau + b.Mau*a.Tu;
    c.Mau = b.Mau*a.Mau;
    return c;
}

PhanSo Tru(PhanSo a, PhanSo b){
    PhanSo c;
    c.Tu = - b.Tu*a.Mau + b.Mau*a.Tu;
    c.Mau = b.Mau*a.Mau;
    return c;
}

PhanSo Nhan(PhanSo a, PhanSo b){
    PhanSo c;
    c.Tu = b.Tu*a.Tu;
    c.Mau = b.Mau * a.Mau;
    return c;
}

PhanSo Chia(PhanSo a, PhanSo b){
    PhanSo c;
    c.Tu = a.Tu*b.Mau;
    c.Mau = a.Mau*b.Tu;
    return c;
}
int USCLN(int m, int d){
    if(m==0) return d;
    return USCLN(d%m,m);
}
PhanSo RutGon(PhanSo c){
    int u;
    u = USCLN(c.Tu, c.Mau);
    c.Tu=c.Tu/u;
    c.Mau=c.Mau/u;
    return c;
}

int main(){
    PhanSo a, b, c;
    NhapPhanSo(a);
    NhapPhanSo(b);
    cout << "Cong 2 phan so a va b: ";
    Xuat(RutGon(Cong(a,b)));
    cout << "Tru 2 phan so a va b: ";
    Xuat(RutGon(Tru(a,b)));
    cout << "Nhan 2 phan so a va b: ";
    Xuat(RutGon(Nhan(a,b)));
    cout << "Chia 2 phan so a va b: ";
    Xuat(RutGon(Chia(a,b)));
}