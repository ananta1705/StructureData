#include <iostream>
#include <string>
#include <limits>
#include "stack.h"
using namespace std;

void createStack(Stack *S) {
    S->top = -1;
}

bool isEmpty(Stack S) {
    return S.top == -1;
}

bool isFull(Stack S) {
    return S.top == MAX_SIZE - 1;
}

void push(Stack *S, infotype X) {
    if (isFull(*S)) {
        cout << "Stack Penuh!" << endl;
    } else {
        S->info[++S->top] = X;
    }
}

infotype pop(Stack *S) {
    if (isEmpty(*S)) {
        return std::numeric_limits<infotype>::min(); 
    } else {
        return S->info[S->top--];
    }
}

void printInfo(Stack S) {
    if (isEmpty(S)) {
        cout << "[TOP] Stack Kosong" << endl;
        return;
    }
    cout << "[TOP] ";
    for (int i = S.top; i >= 0; i--) {
        cout << S.info[i] << " ";
    }
    cout << endl;
}

void balikStack(Stack *S) {
    Stack temp;
    createStack(&temp);

    while (!isEmpty(*S)) {
        push(&temp, pop(S));
    }
    while (!isEmpty(temp)) {
        push(S, pop(&temp));
    }
}

void pushAscending(Stack *S, infotype X) {
    Stack temp;
    createStack(&temp);

    while (!isEmpty(*S) && S->info[S->top] > X) {
        push(&temp, pop(S));
    }

    push(S, X);

    while (!isEmpty(temp)) {
        push(S, pop(&temp));
    }
}

void getInputStream(Stack *S) {
    string inputLine;
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    getline(cin, inputLine); 

    for (int i = inputLine.length() - 1; i >= 0; i--) {
        if (isdigit(inputLine[i])) {
            infotype digit = inputLine[i] - '0'; 
            push(S, digit);
        }
    }
}