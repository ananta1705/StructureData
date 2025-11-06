#include <iostream>
#include "queue.h"
using namespace std;

int main() {
    Queue q;
    init(q);
    int pilihan, nilai;

    do {
        cout << "\n=== PROGRAM QUEUE SEDERHANA ===\n";
        cout << "1. Enqueue (Tambah Data)\n";
        cout << "2. Dequeue (Hapus Data)\n";
        cout << "3. Tampilkan Queue\n";
        cout << "4. Keluar\n";
        cout << "Pilih menu (1-4): ";
        cin >> pilihan;

            switch (pilihan) {
            case 1:
                cout << "Masukkan nilai : ";
                cin >> nilai;
                enqueue(q, nilai);
                break;
            case 2:
                dequeue(q);
                break;
            case 3:
                display(q);
                break;
            case 4:
                cout << "Keluar dari program.\n";
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi.\n";
        }
    } while (pilihan != 4);

    return 0;
}