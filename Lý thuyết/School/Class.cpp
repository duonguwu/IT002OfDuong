#include <iostream>
#include <vector>
#include "Student.cpp"
using namespace std;

class Class : public Student{
private:
    string nameClass;
    vector<Student> Students;
public:
    Class(string nameClass, vector<Student> Students){
        this->nameClass =nameClass;
        this->Students = Students;
    }
    void Input(Student &a){
        getline(cin, a.Name);
        getline(cin, a.Date);
        cin >> a.MSSV >> a.Toan >> a.Van >> a.Anh;     
    }
    
    //char &Name, char &Date, char &MSSV, float &Toan, float &Van, float &Anh
    void Output(Student a){
        cout << a.Name << " " << a.Date << " "<< a.MSSV << " " << a.Toan << " " << a.Van << " " << a.Anh << endl; 
    }

    
};

int main(){

}