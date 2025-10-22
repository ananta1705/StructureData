#include <iostream>

int main() {
    int x;
    std::cout << "Masukkan sebuah angka: ";
    std::cin >> x;
    if (x % 3 == 0) {
        std::cout << x << " adalah bilangan kelipatan tiga" << std::endl;
    } else {
        std::cout << x << " bukan bilangan kelipatan tiga" << std::endl;
    }
    return 0;
}