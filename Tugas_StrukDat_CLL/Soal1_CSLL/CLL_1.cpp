#include "CLL_1.h"

void createList(List& L) {
    L.first = nullptr;
    L.last = nullptr;
}

// a. Function createNewElmt
address createNewElmt(string nim, string nama, int usia) {
    address p = new Elmt;
    if (p != nullptr) {
        p->nim = nim;
        p->nama = nama;
        p->umur = usia;
        p->next = nullptr;
    }
    return p;
}

// b. Function isEmpty
bool isEmpty(List L) {
    return L.first == nullptr;
}

// c. Procedure pemilihan
void pemilihan(List L, Group& G) {
    if (isEmpty(L)) {
        G.ketua = nullptr; G.bendahara = nullptr;
        return;
    }

    address P = L.first;
    address P_max = P; address P_min = P;
    int Umur_max = P->umur; int Umur_min = P->umur;
    P = P->next;

    while (P != L.first) {
        if (P->umur > Umur_max) {
            Umur_max = P->umur; P_max = P;
        }
        if (P->umur < Umur_min) {
            Umur_min = P->umur; P_min = P;
        }
        P = P->next;
    }

    G.ketua = P_max;
    G.bendahara = P_min;
}

// d. Procedure tambahAnggota (Insert First)
void tambahAnggota(List& L, string nim, string nama, int usia) {
    address p = createNewElmt(nim, nama, usia);
    if (p != nullptr) {
        if (isEmpty(L)) {
            L.first = p; L.last = p;
            p->next = p;
        } else {
            p->next = L.first;
            L.first = p;
            L.last->next = L.first; // Circular link
        }
    }
}

void displayList(List L) {
    if (isEmpty(L)) {
        cout << "List kosong." << endl;
        return;
    }
    address P = L.first;
    cout << "Anggota (NIM | Nama | Umur):" << endl;
    do {
        cout << "  " << P->nim << " | " << P->nama << " | " << P->umur;
        if (P == L.first) cout << " [First]";
        if (P == L.last) cout << " [Last]";
        cout << endl;
        P = P->next;
    } while (P != L.first);
}