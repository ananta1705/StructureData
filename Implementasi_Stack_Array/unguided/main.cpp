#include <iostream>
#include <string>
#include "stack.h"
#include "stack.cpp"
using namespace std;

int main() {
    cout << "Hello world!" << endl;
    Stack S;
    createStack(S);

    // Sesuai Gambar 7-14 (pushAscending)
    pushAscending(&S, 3);
    pushAscending(&S, 4);
    pushAscending(&S, 8);
    pushAscending(&S, 2);
    pushAscending(&S, 3);
    pushAscending(&S, 9);

    printInfo(S);
    cout << "balik stack" << endl;
    balikStack(&S);
    printInfo(S);

    return 0;
}