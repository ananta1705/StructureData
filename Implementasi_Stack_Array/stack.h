#ifndef STACK_H
#define STACK_H

#define MAX_SIZE 100

// Definisi struktur Stack
typedef struct {
	int data[MAX_SIZE];
	int top;
} Stack;

// Prototipe fungsi ADT Stack
void createStack(Stack *s);
bool isEmpty(Stack s);
bool isFull(Stack s);
void push(Stack *s, int value);
void pop(Stack *s); // Sesuai gambar: void
int top(Stack s);
void display(Stack s);

#endif