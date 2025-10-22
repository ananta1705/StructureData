#include <iostream>
using namespace std;

struct Mahasiswa {
    string NIM;
    int nilai;
};

int nilaiPertama(Mahasiswa T[], int N, string cariNIM) { // Mengembalikan nilai pertama dari NIM tertentu
    for (int i = 0; i < N; i++) { // Telusuri array
        if (T[i].NIM == cariNIM) // Jika NIM cocok
            return T[i].nilai; // Kembalikan nilai
    }
    return -1;
}

int main() {
    Mahasiswa T[] = {
        {"114", 97}, {"113", 70}, {"118", 88}, {"116", 40}, // Data mahasiswa
        {"117", 90}, {"119", 100}, {"115", 75}, {"114", 85},
    };

    string inputNIM;
    cout << "Masukkan NIM: "; 
    cin >> inputNIM; 

    int hasil = nilaiPertama(T, 10, inputNIM); // Cari nilai pertama dari NIM yang dimasukkan

    if (hasil != -1) // Jika ditemukan
        cout << "Nilai pertama: " << hasil << endl;
    else
        cout << "NIM tidak ditemukan." << endl;

    return 0;
}
