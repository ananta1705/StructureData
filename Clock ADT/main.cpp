#include "Clock.h"
#include <iostream>

int main() {
    std::cout << "--- Pengujian ADT Clock Final ---" << std::endl;

    // 1. Constructor dan Validasi
    Clock c1(2, 30, 4);
    std::cout << "c1: " << c1 << std::endl;

    Clock c2(6, 0, 0);
    std::cout << "c2: " << c2 << std::endl;

    Clock c_bad(25, 70, 5); 
    std::cout << "c_bad (setelah validasi): " << c_bad << std::endl;

    // 2. Accessor (Getter)
    std::cout << "\nJam c1: " << c1.hours() << std::endl;

    // 3. Mutator (Setter)
    std::cout << "\n--- Pengujian Setter dan Validasi ---" << std::endl;
    std::cout << "Mengubah c1 menjadi 10:05:55..." << std::endl;
    c1.setHour(10); 
    c1.setMinute(5); 
    c1.setSecond(55); 
    std::cout << "c1 (baru): " << c1 << std::endl;

    c1.setHour(24); // Test validasi setter
    c1.setMinute(60); // Test validasi setter
    std::cout << "c1 (setelah coba set 24:60:xx): " << c1 << std::endl; 

    // 4. Operasi Aritmatika
    std::cout << "\n--- Pengujian Aritmatika ---" << std::endl;
    Clock c_durasi(0, 2, 0); // 2 menit
    Clock c_after_add_c = c1 + c_durasi;
    std::cout << c1 << " + " << c_durasi << " = " << c_after_add_c << std::endl;

    int seconds_to_add = 50000;
    Clock c2_after_add_s = c2 + seconds_to_add; // 06:00:00 + 50000s = 19:53:20
    std::cout << c2 << " + " << seconds_to_add << "s = " << c2_after_add_s << std::endl;

    // 5. Operasi Perbandingan
    std::cout << "\n--- Pengujian Perbandingan ---" << std::endl;
    Clock c_same(10, 5, 55);
    std::cout << "c1 (" << c1 << ") == c_same (" << c_same << ")? " << (c1 == c_same ? "Ya" : "Tidak") << std::endl;
    std::cout << "c1 < c2? " << (c1 < c2 ? "Ya" : "Tidak") << std::endl;
    std::cout << "c2 > c1? " << (c2 > c1 ? "Ya" : "Tidak") << std::endl;
    std::cout << "c1 != c2? " << (c1 != c2 ? "Ya" : "Tidak") << std::endl;

    std::cout << "\n--- Selesai Pengujian ---" << std::endl;

    return 0;
}