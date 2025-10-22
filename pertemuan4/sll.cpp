#include "sll.h"
#include <iostream>
using namespace std;

void Createlist(SLL &L) {
    L.head = NULL;
}

bool isEmpty(SLL L) {
    return L.head == NULL;
}

void InsertFirst(SLL &L, int x) {
    Node* newNode = new Node;
    newNode->data = x;
    newNode->next = L.head;
    L.head = newNode;
}

void InsertLast(SLL &L, int x) {
    Node* newNode = new Node;
    newNode->data = x;
    newNode->next = NULL;

    if (isEmpty(L)) {
        L.head = newNode;
    } else {
        Node* p = L.head;
        while (p->next != NULL) {
            p = p->next;
        }
        p->next = newNode;
    }
}

void DeleteFirst(SLL &L) {
    if (!isEmpty(L)) {
        Node* temp = L.head;
        L.head = L.head->next;
        delete temp;
    }
}

void DeleteLast(SLL &L) {
    if (!isEmpty(L)) {
        if (L.head->next == NULL) {
            delete L.head;
            L.head = NULL;
        } else {
            Node* p = L.head;
            while (p->next->next != NULL) {
                p = p->next;
            }
            delete p->next;
            p->next = NULL;
        }
    }
}

void DeleteAfter(Node* preNode) {
    if (preNode != NULL && preNode->next != NULL) {
        Node* temp = preNode->next;
        preNode->next = temp->next;
        delete temp;
    }
}

void ViewList(SLL L) {
    if (isEmpty(L)) {
        cout << "List is empty." << endl;
    return;
    }

    Node* p = L.head;
    cout << "Isi List: ";
    while (p != NULL) {
        cout << p->data;
        if (p->next != NULL) cout << " -> ";
        p = p->next;
    }
    cout << "-> NULL" << endl;
}