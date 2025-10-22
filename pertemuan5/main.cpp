#include "ll.h" // Perhatikan: include file header, bukan file .cpp

int main() {
    LinkedList L; 
    CreateList(L);

    int pilihan, nilai, cari;
    do {
        cout << "\n=== Menu single linked list ===\n";
        cout << "1. Tambah data\n";
        cout << "2. Tampilkan data\n";
        cout << "3. Cari data\n";
        cout << "4. Keluar\n";
        cout << "Pilihan Anda: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan nilai yang akan ditambahkan: ";
                cin >> nilai;
                Insert(L, nilai);
                break;
            case 2:
                Display(L);
                break;
            case 3:
                cout << "Masukkan nilai yang akan dicari: ";
                cin >> cari;
                Search(L, cari);
                break;
            case 4:
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }

    } while (pilihan != 4);

    return 0;
}