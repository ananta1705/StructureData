#include <iostream>
#include "dll.h"
using namespace std;

void createList(DoublyLinkedList &L){
    L.head = nullptr;
}

Node* createNode(int value){
    Node* newNode = new Node;
    newNode->data = value;
    newNode->prev = nullptr;
    newNode->next = nullptr;
    return newNode;
}

void insertFirst(DoublyLinkedList &L, int value){
    Node* newNode = createNode(value);
    if(L.head == nullptr){
        L.head = newNode;
    } else {
        newNode->next = L.head;
        L.head->prev = newNode;
        L.head = newNode;
    }
    cout << "Node " << value << " berhasil ditambahkan di depan.\n";
}

void insertLast(DoublyLinkedList &L, int value){
    Node* newNode = createNode(value);
    if(L.head == nullptr){
        L.head = newNode;
    } else{
        Node* temp = L.head;
        while(temp->next != nullptr)
            temp = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
    }
    cout << "Node " << value << " berhasil ditambahkan di belakang.\n";
}

void insertAfter(DoublyLinkedList &L, int key, int value){
    Node* temp = L.head;
    while(temp != nullptr && temp->data != key)
        temp = temp->next;
    if(temp == nullptr){
        cout << "Node dengan nilai " << key << " tidak ditemukan.\n";
        return;
    }
    Node* newNode = createNode(value);
    newNode->next = temp->next;
    newNode->prev = temp;
    if(temp->next != nullptr)
        temp->next->prev = newNode;
    temp->next = newNode;
    cout << "Node " << value << " berhasil ditambahkan setelah " << key << ".\n";
}

void insertBefore(DoublyLinkedList &L, int key, int value){
    Node* temp = L.head;
    while(temp != nullptr && temp->data != key)
        temp = temp->next;
    if(temp == nullptr){
        cout << "Node dengan nilai " << key << " tidak ditemukan.\n";
        return;
    }
    Node* newNode = createNode(value);
    newNode->next = temp;
    newNode->prev = temp->prev;
    if(temp->prev != nullptr)
        temp->prev->next = newNode;
    else
        L.head = newNode;
    temp->prev = newNode;
    cout << "Node " << value << " berhasil ditambahkan sebelum " << key << ".\n";
}

void deleteFirst(DoublyLinkedList &L){
    if(L.head == nullptr){
        cout << "List kosong.\n";
        return;
    }
    Node* temp = L.head;
    L.head = L.head->next;
    if(L.head != nullptr)
        L.head->prev = nullptr;
    cout << "Node pertama (" << temp->data << ") dihapus.\n";
    delete temp;
}

void deleteLast(DoublyLinkedList &L){
    if(L.head == nullptr){
        cout << "List kosong.\n";
        return;
    }
    Node* temp = L.head;
    while(temp->next != nullptr)
        temp = temp->next;
    if(temp->prev != nullptr)
        temp->prev->next = nullptr;
    else
        L.head = nullptr;
    cout << "Node terakhir (" << temp->data << ") dihapus.\n";
    delete temp;
}

void deleteAfter(DoublyLinkedList &L, int key){
    Node* temp = L.head;
    while(temp != nullptr && temp->data != key)
        temp = temp->next;
    if(temp == nullptr || temp->next == nullptr){
        cout << "Tidak ada node setelah " << key << ".\n";
        return;
    }
    Node* del = temp->next;
    temp->next = del->next;
    if(del->next != nullptr)
        del->next->prev = temp;
    cout << "Node setelah " << key << " (" << del->data << ") dihapus.\n";
    delete del;
}

void deleteBefore(DoublyLinkedList &L, int key){
    Node* temp = L.head;
    while(temp != nullptr && temp->data != key)
        temp = temp->next;
    if(temp == nullptr || temp->prev == nullptr){
        cout << "Tidak ada node sebelum " << key << ".\n";
        return;
    }
    Node* del = temp->prev;
    if(del->prev != nullptr)
        del->prev->next = temp;
    else
        L.head = temp;
    temp->prev = del->prev;
    cout << "Node sebelum " << key << " (" << del->data << ") dihapus.\n";
    delete del;
}

void updateNode(DoublyLinkedList &L, int oldValue, int newValue){
    Node* temp = L.head;
    while(temp != nullptr && temp->data != oldValue)
        temp = temp->next;
    if(temp == nullptr){
        cout << "Node dengan nilai " << oldValue << " tidak ditemukan.\n";
        return;
    }
    temp->data = newValue;
    cout << "Node " << oldValue << " diupdate menjadi " << newValue << ".\n";
}

void searchNode(DoublyLinkedList &L, int value){
    Node* temp = L.head;
    int pos = 1;
    while(temp != nullptr && temp->data != value){
        temp = temp->next;
        pos++;
    }
    if(temp == nullptr)
        cout << "Node " << value << " tidak ditemukan.\n";
    else
        cout << "Node " << value << " ditemukan di posisi ke-" << pos << ".\n";
}

void displayForward(DoublyLinkedList L){
    Node* temp = L.head;
    cout << "Isi list (maju): ";
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void displayBackward(DoublyLinkedList L){
    Node* temp = L.head;
    if(temp == nullptr){
        cout << "List kosong.\n";
        return;
    }
    while(temp->next != nullptr)
        temp = temp->next;
    cout << "Isi list (mundur): ";
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}
