#include <iostream>
using namespace std;

// Prosedur Tukar1 (input/output untuk a dan b)
void Tukar1(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Prosedur Tukar2 (input untuk a, input/output untuk b)
void Tukar2(int a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b;
    
    // Memberikan nilai awal
    a = 10;
    b = 5;

    // Menampilkan nilai sebelum tukar
    cout << "Sebelum Tukar:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    // Memanggil prosedur Tukar1
    Tukar1(b, a);

    // Menampilkan nilai setelah tukar1
    cout << "Setelah Tukar1:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    // Memanggil prosedur Tukar2
    Tukar2(a, b);

    // Menampilkan nilai setelah tukar2
    cout << "Setelah Tukar2:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
