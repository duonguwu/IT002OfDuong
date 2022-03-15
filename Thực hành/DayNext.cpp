#include <iostream>
using namespace std;

struct Day
{
    int dd;
    int mm;
    int yy;
};

bool NamNhuan(int yy){
    if(yy % 400 == 0)
        return true;
    if (yy % 4 == 0 && yy % 100 != 0)
        return true;
    return false;
}

int Ngay1Thang(int mm, int yy){
    if(mm == 2){
        if(NamNhuan(yy))  
            return 29;
        else    
            return 28;
    }
    else{
        switch (mm){
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                return 31;
        }
    }
    return 30;
}

bool DayNormal(Day day){
    if(day.mm > 12)
        return false;
    if(day.dd > Ngay1Thang(day.mm, day.yy)){
        return false;
    }
    return true;
}

Day NextDay(Day &day){
    day.dd += 1;
    if(day.dd > Ngay1Thang(day.mm,day.yy)){
        day.dd = 1;
        day.mm++;
        if(day.mm > 12){
            day.mm = 1;
            day.yy++;
        }
    }
    return day;
}

void Input(Day &day){
    cout << "Nhap ngay thang nam: ";
    cin >> day.dd >> day.mm >> day.yy;
}

void Output(Day day){
    if(DayNormal(day)){
        cout << "Ngay hom nay la: " << day.dd << "/" << day.mm << "/" << day.yy << endl;
        NextDay(day);
        cout << "Ngay mai la: " << day.dd << "/" << day.mm << "/" << day.yy << endl;
    }
    else 
        cout << "Ngay khong hop le.";
}
int main(){
    Day day;
    Input(day);
    Output(day);
}