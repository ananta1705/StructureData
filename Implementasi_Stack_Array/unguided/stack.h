#ifndef STACK_H
#define STACK_H

typedef int infotype;
#define MAX_SIZE 20

typedef struct {
    infotype info[MAX_SIZE];
    int top;
} Stack;

void createStack(Stack *S);
bool isEmpty(Stack S);
bool isFull(Stack S);
void push(Stack *S, infotype X);
infotype pop(Stack *S);
void printInfo(Stack S);
void balikStack(Stack *S);
void pushAscending(Stack *S, infotype X);
void getInputStream(Stack *S);

#endif