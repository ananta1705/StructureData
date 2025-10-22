#ifndef SINGLYLIST_H
#define SINGLYLIST_H

#include <iostream>
using namespace std;

// Definisi Tipe Data
typedef int infotype;
typedef struct Elmlist* address;

// Definisi Struktur Elemen List
struct Elmlist {
    infotype info;
    address next;
};

// Definisi Struktur List
struct List {
    address First;
};

// --- PROSEDUR DAN FUNGSI ---

// 1. Primitif Dasar
void CreateList(List &L);
address alokasi(infotype X);
void dealokasi(address P);

// 2. Primitif Penyisipan (Digunakan di main.cpp)
void insertFirst(List &L, address P);

// 3. Primitif Output (Digunakan di main.cpp)
void printInfo(List L);

// --- TUGAS UNGUIDED ---

// 4. Searching (Tugas 3)
// Mencari elemen dengan info X dan mengembalikan alamatnya (address)
address findElm(List L, infotype X);

// 5. Summation (Tugas 4)
// Menghitung jumlah total info seluruh elemen
int totalInfo(List L);

#endif // SINGLYLIST_H