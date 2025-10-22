#include <iostream>
using namespace std;

int main() {
    int x = 100;
    int* p = &x; // pointer p menyimpan alamat memori dari variabel x
    
    cout << "Nilai x: " << x << endl;
    cout << "Alamat memori x (&x): " << &x << endl;
    cout << "isi ponter p: " << *(&x) << endl;
    cout << "Nilai yang ditunjuk oleh pointer p (*p): " << *(&x) << endl;
    return 0;
}