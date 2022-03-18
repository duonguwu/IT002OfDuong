#include <iostream>
#include "Student.cpp"
#include "Class.cpp"
using namespace std;

int main(){
    vector<Student> Students;
    Students.push_back(Student("Duong", "04/08/2003", 21521990, 8, 8, 8));
    Student.push_back(Student("Long", "01/01/2003", 1234, 8, 8, 8));

    Class Class1("HTTT2021", Students);
    Class1.Output();
}