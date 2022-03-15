#include <iostream>
using namespace std;

class Point{
private:
    int x;
    int y;
public:
    Point(int x, int y){
        this->x = 0;
        this->y = 0;
    }
    int getX(){
        return x;
    }
    void setX(int x){
        this->x = x;
    }
    ~Point();
};