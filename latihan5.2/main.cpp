#include "Singlylist.h"

int main() {
    List L;
    address P1, P2, P3, P4, P5 = nullptr; // Menggunakan nullptr alih-alih Nil

    // --- BAGIAN TUGAS 2 (GUIDED) ---
    CreateList(L);

    // Penyisipan elemen sesuai urutan di soal (2, 0, 8, 12, 9) dengan insertFirst
    // Perhatikan: Karena menggunakan insertFirst, urutan penyisipan harus terbalik
    // Penyisipan: 2, 0, 8, 12, 9
    // Urutan List (First -> Last): 9 -> 12 -> 8 -> 0 -> 2

    P5 = alokasi(9);
    insertFirst(L, P5);
    
    P4 = alokasi(12);
    insertFirst(L, P4);
    
    P3 = alokasi(8);
    insertFirst(L, P3);

    P2 = alokasi(0);
    insertFirst(L, P2);

    P1 = alokasi(2);
    insertFirst(L, P1);

    // Output untuk memverifikasi list (Gambar 5-2)
    cout << "Output Singlylist: ";
    printInfo(L); 
    
    // --- BAGIAN TUGAS 3 (UNGUIDED - Searching) ---
    cout << "\n--- Tugas 3: Searching ---\n";
    infotype searchKey = 8;
    address foundAddress = findElm(L, searchKey);

    if (foundAddress != nullptr) {
        cout << searchKey << " ditemukan dalam list." << endl;
    } else {
        cout << searchKey << " tidak ditemukan dalam list." << endl;
    }

    // --- BAGIAN TUGAS 4 (UNGUIDED - Summation) ---
    cout << "\n--- Tugas 4: Summation ---\n";
    int total = totalInfo(L);
    cout << "Total info dari kelima elemen adalah " << total << endl;
    
    // Opsional: Membersihkan memori
    // Dealokasi elemen-elemen list
    address P = L.First;
    while (P != nullptr) {
        address nextP = P->next;
        dealokasi(P);
        P = nextP;
    }
    L.First = nullptr;

    return 0;
}