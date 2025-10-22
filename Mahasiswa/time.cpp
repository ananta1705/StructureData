#include "time.h"

void CreateTime(Time &T, int h, int m, int s){
    T.hh = h % 24;
    T.mm = m % 60;
    T.ss = s % 60;
}

int GetHour(Time T){
    return T.hh;
}

int GetMinute(Time T){
    return T.mm;
}

int GetSecond(Time T){
    return T.ss;
}

void SetHour(Time &T, int h){
T.hh = h % 24;
}

void SetMinute(Time &T, int s){
    T.ss = s % 60;
}



void NextSecond(Time &T){
    T.ss++;
    if(T.ss >=60){
        T.ss = 0;
        T.mm++;
        if(T.mm >= 60){
            T.mm = 0;
            T.hh = (T.hh + 1) % 24;
        }
    }
}

void PrevSecond(Time &T){
    T.ss--;
    if(T.ss < 0){
        T.ss = 59;
        T.mm--;
        if(T.mm < 0){
            T.mm = 59;
            T.hh = (T.hh - 1 + 24 )% 24;
        }
    }
}

int Durasi(Time T1, Time T2){
    int detik1 = T1.hh * 3600 + T1.mm * 60 + T1.ss;
    int detik2 = T2.hh * 3600 + T2.mm * 60 + T2.ss;
    return detik2 - detik1;
}