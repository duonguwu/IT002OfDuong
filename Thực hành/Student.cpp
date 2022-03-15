#include <iostream>
using namespace std;

struct SinhVien {
    char HoTen[100];
    float Toan, Van, DTB;
};

void NhapSV(SinhVien &a){
    cin.ignore();
    cin.getline(a.HoTen,100);
    cin >> a.Toan >> a.Van;
}

void XuatSV(SinhVien a){
    a.DTB = (a.Toan + a.Van)/2;
    cout << "Ho va ten: " << a.HoTen << endl;
    cout << "Diem Toan: " << a.Toan << endl;
    cout << "Diem Van: " << a.Van << endl;
    cout << "DIem trung binh: " << a.DTB << endl;
}

int main(){
    SinhVien a;
    NhapSV(a);
    XuatSV(a);
}