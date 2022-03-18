#pragma once
#include <iostream>
using namespace std;

class Student{
private:
    string Name;
    string Date;
    int MSSV;
    float Toan, Van, Anh;
public:
    Student(char Name, char Date, char MSSV, float Toan, float Van, float Anh ){
        this->Name = Name;
        this->Date = Date;
        this->MSSV = MSSV;
        this->Toan = Toan;
        this->Van = Van;
        this->Anh = Anh;
    }
    string getName(){
        return Name;
    }
    string getDate(){
        return Date;
    }
    int getMSSV(){
        return MSSV;
    }
    float getToan(){
        return Toan;
    }
    float getVan(){
        return Van;
    }
    float getAnh(){
        return Anh;
    }
};
