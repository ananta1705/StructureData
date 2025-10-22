#include <iostream>
#include <limits>

int main() {
    float bilangan1, bilangan2;

    std::cout << "--- Program Operasi Dasar Float ---" << std::endl;

    std::cout << "Masukkan bilangan float pertama: ";
    while (!(std::cin >> bilangan1)) {
        std::cout << "Input tidak valid. Masukkan angka float: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    std::cout << "Masukkan bilangan float kedua: ";
    while (!(std::cin >> bilangan2)) {
        std::cout << "Input tidak valid. Masukkan angka float: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    std::cout << "\n--- Hasil Perhitungan ---" << std::endl;

    float hasil_penjumlahan = bilangan1 + bilangan2;
    std::cout << "Penjumlahan (" << bilangan1 << " + " << bilangan2 << "): " << hasil_penjumlahan << std::endl;

    float hasil_pengurangan = bilangan1 - bilangan2;
    std::cout << "Pengurangan (" << bilangan1 << " - " << bilangan2 << "): " << hasil_pengurangan << std::endl;

    float hasil_perkalian = bilangan1 * bilangan2;
    std::cout << "Perkalian (" << bilangan1 << " * " << bilangan2 << "): " << hasil_perkalian << std::endl;

    if (bilangan2 != 0.0) {
        float hasil_pembagian = bilangan1 / bilangan2;
        std::cout << "Pembagian (" << bilangan1 << " / " << bilangan2 << "): " << hasil_pembagian << std::endl;
    } else {
        std::cout << "Pembagian: Tidak dapat dibagi dengan nol (Error)" << std::endl;
    }

    std::cout << "-------------------------" << std::endl;

    return 0;
}