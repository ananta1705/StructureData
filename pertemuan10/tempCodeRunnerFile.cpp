#include <iostream>
#include "tree.h"
#include "tree.cpp
using namespace std;

int main(){
    Node* root = nullptr;
    int Pilihan, value;

    do {
        cout << "\nMenu Binary Search Tree\n";
        cout << "1. Insert Node\n";
        cout << "2. Search Node\n";
        cout << "3. Delete Node\n";
        cout << "4. Treversal preorder\n";
        cout << "5. Treversal inorder\n";
        cout << "6. Treversal postorder\n";
        cout << "7. Exit\n";
        cout << "Pilih menu: ";
        cin >> Pilihan;

        switch (Pilihan)
        case 1:
            cout << "Masukkan nilai yang akan diinsert: ";
            cin >> value;
            root = insertNode(&root, value);
            break;

        case 2:
            cout << "Masukkan nilai yang akan dicari: ";
            cin >> value;
            if(searchNode(root, value)){
                cout << "Data ditemukam \n";
             else 
                cout << "tidak ditemukan dalam tree.\n";
            break;
            
            case 3:
            cout << "Masukkan nilai yang akan dihapus: ";
            cin >> value;
            root = deleteNode(root, value);
            break;

        case 4:
            cout << "Preorder: ";
            preorder(root);
            cout << endl;
            break;

        case 5:
            cout << "Inorder: ";
            inorder(root);
            cout << endl;
            break;

        case 6:
            cout << "Postorder: ";
            postorder(root);
            cout << endl;
            break;
            
        case 7:
                cout << "Exiting program.\n";
                break;

        default:
            cout << "Pilihan tidak valid. Silakan coba lagi.\n";
        
    }
} while (Pilihan != 7);

    return 0;
}