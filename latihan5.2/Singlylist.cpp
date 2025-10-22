#include "Singlylist.h"

// --- IMPLEMENTASI PRITIMITIF DASAR ---

// Membuat List Kosong
void CreateList(List &L) {
    L.First = nullptr;
}

// Alokasi Element Baru
address alokasi(infotype X) {
    address P = new Elmlist;
    P->info = X;
    P->next = nullptr;
    return P;
}

// Dealokasi Element
void dealokasi(address P) {
    delete P;
}

// --- IMPLEMENTASI PRITIMITIF PENYISIPAN ---

// Menyisipkan elemen di Awal List (InsertFirst)
void insertFirst(List &L, address P) {
    P->next = L.First;
    L.First = P;
}

// --- IMPLEMENTASI PRITIMITIF OUTPUT ---

// Menampilkan Seluruh Info Elemen
void printInfo(List L) {
    address P = L.First;
    cout << "Isi List: ";
    if (P == nullptr) {
        cout << "List kosong." << endl;
        return;
    }
    while (P != nullptr) {
        cout << P->info << " ";
        P = P->next;
    }
    cout << endl;
}

// --- IMPLEMENTASI TUGAS UNGUIDED ---

// 4. Searching (Tugas 3)
address findElm(List L, infotype X) {
    address P = L.First;
    while (P != nullptr) {
        if (P->info == X) {
            return P; // Ditemukan
        }
        P = P->next;
    }
    return nullptr; // Tidak ditemukan
}

// 5. Summation (Tugas 4)
int totalInfo(List L) {
    address P = L.First;
    int total = 0;
    while (P != nullptr) {
        total += P->info;
        P = P->next;
    }
    return total;
}