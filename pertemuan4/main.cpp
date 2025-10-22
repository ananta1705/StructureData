#include "sll.h"
#include "sll.cpp"
#include <iostream>
using namespace std;

int main() {
    SLL L;
    Createlist(L);

    cout << "Inserting 10, 20." << endl;
    InsertLast(L, 10);
    InsertLast(L, 20);
    ViewList(L);

    cout << "Inserting 30, 40." << endl;
    InsertLast(L, 30);
    InsertLast(L, 40);
    ViewList(L);

    cout << "DeletingFirst" << endl;
    DeleteFirst(L);
    ViewList(L);

    cout << "DeletingLast" << endl;
    DeleteLast(L);
    ViewList(L);

    cout << "InsertingAfter node pertama (50)" << endl;
    InsertAfter(L.head, 50);
    ViewList(L);
    
    cout << "DeletingAfter node pertama" << endl;
    DeleteAfter(L.head);
    ViewList(L);
    return 0;

}