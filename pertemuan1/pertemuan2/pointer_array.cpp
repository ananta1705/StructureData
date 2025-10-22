#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int* p = arr; // pointer p menunjuk ke elemen pertama array arr

    // Mengakses elemen array
    cout << "Elemen pertama: " << *p << endl;
    cout << "Elemen kedua: " << *(p+1) << endl;
    cout << "Elemen ketiga: " << *(p+2) << endl;
    cout << "Elemen keempat: " << *(p+3) << endl;

    return 0;
}