#ifndef CLL_2_H
#define CLL_2_H

#include <iostream>
#include <string>

using namespace std;

// === Kamus Data (Struktur) ===
struct ElmtLagu {
    string judul;
    string penyanyi;
    ElmtLagu* prev; 
    ElmtLagu* next; 
};

typedef ElmtLagu* address;

struct List {
    address first; 
};

// === Deklarasi Fungsi/Prosedur ===
void createList(List& L);
address createNewElm(string judul, string penyanyi); // b. (i)
void insertLast(address p, List& L); // b. (ii)
void add(string judul, string penyanyi, List& L); // b. (iii)

void deleteFirst(List& L, address& p); // c. (i)
void deleteAfter(address q, address& p, List& L); // c. (ii)
address searchLagu(string judul, string penyanyi, List L); // c. (iii)
void moveToEnd(string judul, string penyanyi, List& L); // c. (iv)

void playLaguToLagu(string judul1, string penyanyi1, string judul2, string penyanyi2, List L); // d.
void displayList(List L);

#endif