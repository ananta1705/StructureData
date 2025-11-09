#include <iostream>
#include "queue.h"
using namespace std;

int main() {
    cout << "Hello World" << endl;
    Queue Q;
    createQueue(Q);

    cout << "H - T  | Queue Info" << endl;
    cout << "-------------------" << endl;

    printInfo(Q);
    enqueue(Q, 5); printInfo(Q);
    enqueue(Q, 2); printInfo(Q);
    enqueue(Q, 7); printInfo(Q);
    enqueue(Q, 1); printInfo(Q);
    enqueue(Q, 4); printInfo(Q);

    // coba enqueue saat penuh
    enqueue(Q, 9); printInfo(Q);

    // dequeue beberapa kali
    dequeue(Q); printInfo(Q);
    dequeue(Q); printInfo(Q);
    dequeue(Q); printInfo(Q);

    // kosongkan seluruhnya
    dequeue(Q); printInfo(Q);
    dequeue(Q); printInfo(Q);

    // coba dequeue saat kosong
    dequeue(Q); printInfo(Q);

    return 0;
}
