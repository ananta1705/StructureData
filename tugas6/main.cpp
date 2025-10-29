#include <iostream>
#include "dll.h"
using namespace std;

int main(){
    DoublyLinkedList L;
    createList(L);

    int pilihan, value, key, oldValue, newValue;

    do{
        cout << "\n======== MENU DOUBLE LINKED LIST =========\n";
        cout << "1. Insert Depan\n";
        cout << "2. Insert Belakang\n";
        cout << "3. Insert Setelah Node\n";
        cout << "4. Insert Sebelum Node\n";
        cout << "5. Delete First\n";
        cout << "6. Delete Last\n";
        cout << "7. Delete After\n"; 
        cout << "8. Delete Before\n";
        cout << "9. Update Node\n";
        cout << "10. Search Node\n";
        cout << "11. Tampilkan Maju\n";
        cout << "12. Tampilkan Mundur\n";
        cout << "0. Keluar\n";
        cout << "Pilih: ";
        cin >> pilihan;

        switch (pilihan){
            case 1:
                cout << "Masukkan nilai: "; 
                cin >> value;
                insertFirst(L, value); 
                break;
            case 2:
                cout << "Masukkan nilai: "; 
                cin >> value;
                insertLast(L, value); 
                break;
            case 3:
                cout << "Masukkan nilai key: "; 
                cin >> key;
                cout << "Masukkan nilai baru: "; 
                cin >> value;
                insertAfter(L, key, value); 
                break;
            case 4:
                cout << "Masukkan nilai key: "; 
                cin >> key;
                cout << "Masukkan nilai baru: "; 
                cin >> value;
                insertBefore(L, key, value); 
                break;
            case 5:
                deleteFirst(L); 
                break;
            case 6:
                deleteLast(L); 
                break;
            case 7: 
                cout << "Masukkan nilai key: "; 
                cin >> key;
                deleteAfter(L, key); 
                break;
            case 8:
                cout << "Masukkan nilai key: "; 
                cin >> key;
                deleteBefore(L, key);
                break;
            case 9:
                cout << "Masukkan nilai lama: "; 
                cin >> oldValue;
                cout << "Masukkan nilai baru: "; 
                cin >> newValue;
                updateNode(L, oldValue, newValue); 
                break;
            case 10:
                cout << "Masukkan nilai yang dicari: "; 
                cin >> value;
                searchNode(L, value); 
                break;
            case 11:
                displayForward(L); 
                break;
            case 12:
                displayBackward(L); 
                break;
            case 0:
                cout << "Program selesai.\n"; 
                break;
            default:
                cout << "Pilihan tidak valid.\n";
        }
    }while (pilihan != 0);

    return 0;
}
