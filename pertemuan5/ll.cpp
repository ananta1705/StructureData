#include "ll.h"

// membuat list kosong
void CreateList(LinkedList &L) {
    L.head = nullptr;
}

// menambah data di akhir list
void Insert(LinkedList &L, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;

    if (L.head == nullptr) {
        L.head = newNode;
    } else {
        Node* temp = L.head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// menamilkan isi list
void Display(LinkedList L) {
    Node* temp = L.head;
    if (temp == nullptr) {
        cout << "List kosong." << endl;
        return;
    }
    cout << "Isi Linked List: ";
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// mencari data tertentu 
void Search(LinkedList L, int key) {
    Node* temp = L.head;
    int pos = 1;
    bool found = false;

    while (temp != nullptr) {
        if (temp->data == key) {
            cout << "Data " << key << " ditemukan pada posisi ke-" << pos << endl;
            found = true;
            break;
        }
        temp = temp->next;
        pos++;
    }
    if (!found) {
        cout << "Data " << key << " tidak ditemukan" << endl;
    }
} // <<< PASTIKAN KURUNG KURAWAL INI ADA!