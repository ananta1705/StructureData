#include <iostream>

int main() {
    int angka;
    double sum = 0.0;
    int count = 0;
    double rata_rata;

    std::cout << "Masukkan angka (akhiri dengan -999 untuk menghentikan):" << std::endl;

    while (true) {
        std::cin >> angka;
        if (angka == -999) {
            break;
        }
        sum += angka;
        count++;
    }

    if (count > 0) {
        rata_rata = sum / count;
        std::cout << rata_rata << std::endl;
    } else {
        std::cout << 0 << std::endl;
    }

    return 0;
}