#include "time.h"
#include <iostream>
using namespace std;

int main(){
    Time T1, T2;

    CreateTime(T1, 10, 59, 59);
    CreateTime(T2, 11, 0, 5);

    cout << "Waktu T1: " <<GetHour(T1) << ":" <<GetMinute(T1) << ":" <<GetSecond(T1) <<endl;
    cout << "Waktu T2: " <<GetHour(T2) << ":" <<GetMinute(T2) << ":" <<GetSecond(T2) <<endl;

    cout << "Durasi (T2 - T1): " <<Durasi(T1, T2) << "detik" <<endl;

    cout << "NextSecond T1:";
    NextSecond(T1);
    cout << GetHour(T1) << ":" <<GetMinute(T1) << ":" << GetSecond(T1) <<endl;

    cout << "PrevSecond T2: ";
    PrevSecond(T2);
    cout << GetHour(T2) << ":" <<GetMinute(T2) << ":" << GetSecond(T2) <<endl;

    return 0;
}