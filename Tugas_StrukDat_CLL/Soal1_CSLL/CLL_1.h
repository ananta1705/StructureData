#ifndef CLL_1_H
#define CLL_1_H

#include <iostream>
#include <string>

using namespace std;

// === Kamus Data (Struktur) ===
struct Elmt {
    string nim;
    string nama;
    int umur;
    Elmt* next;
};

typedef Elmt* address;

struct List {
    address first;
    address last;
};

struct Group {
    address ketua;
    address bendahara;
};

// === Deklarasi Fungsi/Prosedur ===
void createList(List& L);
address createNewElmt(string nim, string nama, int usia); // a.
bool isEmpty(List L); // b.
void pemilihan(List L, Group& G); // c.
void tambahAnggota(List& L, string nim, string nama, int usia); // d.
void displayList(List L);

#endif