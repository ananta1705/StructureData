#ifndef TIME_H
#define TIME_H

struct Time{
    int hh; //jam
    int mm; //menit
    int ss; //detik
};

/*Konstruktor*/

void CreateTime(Time &T, int h, int m, int s);
//Membuat waktu T dengan jam h, menit m, detik s

/*Selector*/
int GetHour(Time T);
int GetMinute(Time T);
int GetSecond(Time T);

/*Mutator*/
void SetHour(Time &T, int h);
void SetMinute(Time &T, int m);
void SetSecond(Time &T, int s);

/*Primitif*/
void NextSecond(Time &T);
//Menambahkan 1 detik

void PrevSecond(Time &T);
//Mengurangi 1 detik

int Durasi(Time T1, Time T2);
//Menghitung selisih(dalam detik)antara T1 dan T2

#endif