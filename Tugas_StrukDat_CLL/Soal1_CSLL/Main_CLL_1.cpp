#include "CLL_1.h"

int main() {
    List UKM;
    createList(UKM);
    Group Pengurus = {nullptr, nullptr};

    cout << "--- SOAL 1: CIRCULAR SINGLE LINKED LIST (CLL) ---" << endl;
    
    // d. Tambah Anggota (Insert First)
    tambahAnggota(UKM, "1130504", "Budi", 18);
    tambahAnggota(UKM, "1130503", "Ayu", 24);
    tambahAnggota(UKM, "1130502", "Tono", 21);
    tambahAnggota(UKM, "1130501", "Andi", 19); // Andi menjadi First

    cout << "\n1. Current List:" << endl;
    displayList(UKM);

    // c. Pemilihan
    pemilihan(UKM, Pengurus);

    cout << "\n2. Hasil Pemilihan Pengurus:" << endl;
    if (Pengurus.ketua) {
        cout << "Ketua (Tertua): " << Pengurus.ketua->nama << " (Umur: " << Pengurus.ketua->umur << ")" << endl; 
    }
    if (Pengurus.bendahara) {
        cout << "Bendahara (Termuda): " << Pengurus.bendahara->nama << " (Umur: " << Pengurus.bendahara->umur << ")" << endl;
    }

    return 0;
}