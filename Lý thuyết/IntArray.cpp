#include <iostream>
using namespace std;

class IntArray{
private:
    int n;
    int *v;
public:
    IntArray();
    IntArray(int);
    IntArray(IntArray &);
    ~IntArray();
    void Add();
    void Add(int);
    void Output();
    int indexOf(int );
    bool operator==(const IntArray );
    void operator =(const IntArray &);
    bool contains(int);
    friend ostream &operator<<(ostream &, IntArray &);
    friend istream &operator>>(istream &, IntArray &);
    // int operator[]();
    // void delete(int);
};

IntArray::IntArray(int size){
    int i;
    n = size;
    v = new int[n];
}

void IntArray::Add(){
    int i;
    cout << "Nhap vao cac gia tri cua mang: ";
    for(i = 0; i < n; i++){
        cin >> v[i];
    }
}

void IntArray::Add(int x){
    n += 1;
    v[n-1] = x;
}

IntArray::IntArray(IntArray &a){
    int i;
    n = a.n;
    v = new int[n];
    for (i = 0; i < n; i++){
        v[i] = a.v[i];
    }
}

IntArray::~IntArray(){
    delete v;
}

void IntArray::Output(){
    for (int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int IntArray::indexOf(int x){
    for(int i = 0; i < n; i++){
        if(v[i] == x){
            return i;
            break;
        }
    }
    return -1;
}

void IntArray::operator=(const IntArray &a){
    n = a.n;
    v = new int[n];
    for(int i = 0; i < n; i++){
        v[i] = a.v[i];
    }
}

bool IntArray::operator==(IntArray a){
    if(this->n != a.n)
        return false;
    for (int i = 0; i < a.n; i++){
        if(v[i] != a.v[i])
            return false;
    }
    return true;
}

ostream &operator<<(ostream &os, IntArray &a){
    for(int i = 0; i < a.n; i++)
    {
        os << a.v[i] << " ";
    }
    os << endl;
    return os;
}

int main(){
    int k;
    cout << "Nhap vao so phan tu cua mang: ";
    cin >> k;
    IntArray a(k), b(10); // Khai bao mang
    
    a.Add();        // Them cac phan tu vao mang
    cout << "Mang a la: ";
    //a.Output();     // In ra cac phan tu
    cout << a;

    a.Add(5);       // Them phan tu vao duoi mang
    cout << "Mang a sau khi them 1 phan tu: ";
    //a.Output();
    cout << a;

}
