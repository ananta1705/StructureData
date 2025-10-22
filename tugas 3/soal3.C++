#include <iostream>
#include <cmath>

int main() {
    int N;

    std::cout << "Masukkan bilangan bulat untuk input (N, tinggi pola): ";
    std::cin >> N;
    
    std::cout << "\nOutput:\n";

    for (int i = 1; i <= (2 * N - 1); ++i) {
        
        int k = N - std::abs(N - i); 

        for (int s = 1; s <= (N - k); ++s) {
            std::cout << " ";
        }

        for (int j = k; j >= 1; --j) {
            if (j == 1 && k != N && k != 0) {
                std::cout << "*";
            } else if (k == 0 && j == 1) {
                // Do nothing for the single * case (handled later)
            } else {
                std::cout << j;
            }
        }
        
        if (k > 0) {
            std::cout << "*";
        }

        for (int j = 1; j <= k; ++j) {
            if (j == 1) {
                std::cout << j;
            } else {
                std::cout << j;
            }
        }
        
        if (k == 0 && i == (2 * N - 1)) {
            // Adjusting for the single '*' on the last line for the 4-line pattern
            std::cout << "*";
        }

        std::cout << "\n";
    }

    return 0;
}