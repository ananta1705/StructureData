#include <iostream>

int main() {
    int a;
    std::cout << "Masukkan sebuah angka: ";
    std::cin >> a;
    if (a == 5) {
        std::cout << "Ini adalah angka lima" << std::endl;
    } else {
        std::cout << "Ini bukan angka lima" << std::endl;
    }
    return 0;
}