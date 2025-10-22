#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

struct LinkedList {
    Node* head;
};

void CreateList(LinkedList &L);
void Insert(LinkedList &L, int value);
void Display(LinkedList L);
void Search(LinkedList L, int key);

#endif // LINKED_LIST_H