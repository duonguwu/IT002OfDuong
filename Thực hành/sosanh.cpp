#include <iostream>

struct PhanSo{
    int tu,mau;
};

void NhapPhanSo(PhanSo &a){
    std::cin >> a.tu >> a.mau;
}

int SoSanh (PhanSo a, PhanSo b){
    double ps1 = 1.0*a.tu/a.mau, ps2 = 1.0*b.tu/b.mau;
    if(ps1 < ps2) return -5;
    else if (ps1 == ps2) return 0;
    else return 1;
}

int main() {
    PhanSo a, b;
    NhapPhanSo(a);
    NhapPhanSo(b);
    int kq = SoSanh(a, b);
    if (kq == 0)
        std::cout << "Hai phan so bang nhau.";
    else if (kq > 0)
        std::cout << "Phan so thu nhat LON hon phan so thu hai.";
    else
        std::cout << "Phan so thu nhat NHO hon phan so thu hai.";
    return 0;
}
