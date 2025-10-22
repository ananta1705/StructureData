#include <iostream>

int main() {
    int ukuran;
    long long total = 0; 
    int elemen;

    // 1. INPUT UKURAN ARRAY
    // Ini mencetak: Masukkan ukuran array: 
    std::cout << "Masukkan ukuran array: ";
    std::cin >> ukuran; // Program berhenti di sini menunggu Anda mengetik '5' dan ENTER

    // 2. INPUT DAN PROSES ELEMEN
    // Ini mencetak: Masukkan elemen array: 
    std::cout << "Masukkan elemen array: ";
    
    // Perulangan untuk membaca N (ukuran) elemen
    for (int i = 0; i < ukuran; ++i) {
        // Membaca setiap angka (6, 6, 6, 2, 1) secara berurutan
        std::cin >> elemen;
        
        // Perintah inti: Menambahkan elemen ke total
        total = total + elemen; 
    }

    // 3. OUTPUT HASIL
    // Ini mencetak: Output: 21
    std::cout << "Output: " << total << "\n";

    return 0;
}