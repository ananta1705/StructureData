#ifndef DLL_H
#define DLL_H

// struktur node
struct Node {
    int data;
    Node* prev;
    Node* next;
};

// struktur list
struct DoublyLinkedList {
    Node* head;
};

// fungsi dasar
void createList(DoublyLinkedList &L);
Node* createNode(int value);

// insert
void insertFirst(DoublyLinkedList &L, int value);
void insertLast(DoublyLinkedList &L, int value);
void insertAfter(DoublyLinkedList &L, int key, int value);
void insertBefore(DoublyLinkedList &L, int key, int value);

// delete
void deleteFirst(DoublyLinkedList &L);
void deleteLast(DoublyLinkedList &L);
void deleteAfter(DoublyLinkedList &L, int key);
void deleteBefore(DoublyLinkedList &L, int key);

// update & search
void updateNode(DoublyLinkedList &L, int oldValue, int newValue);
void searchNode(DoublyLinkedList &L, int value);

// display
void displayForward(DoublyLinkedList L);
void displayBackward(DoublyLinkedList L);

#endif
