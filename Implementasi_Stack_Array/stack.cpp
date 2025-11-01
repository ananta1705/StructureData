#include <iostream>
#include "stack.h"
using namespace std;

void createStack(Stack *s) {
	s->top = -1;
}

bool isEmpty(Stack s) {
	return s.top == -1;
}

bool isFull(Stack s) {
	return s.top == MAX_SIZE - 1;
}

void push(Stack *s, int value) {
	if (isFull(*s)) {
		cout << "Stack penuh! Tidak bisa menambah data.\n";
	} else {
		s->data[++s->top] = value;
		cout << value << " berhasil dimasukkan ke stack.\n";
	}
}

// Catatan: Fungsi ini dikoreksi menjadi 'void' agar konsisten dengan stack.h
// dan menghilangkan error 'cannot overload' yang Anda alami.
void pop(Stack *s) {
	if (isEmpty(*s)) {
		cout << "Stack kosong! Tidak bisa menghapus data.\n";
	} else {
		// Menghapus data (post-decrement top)
		cout << "Menghapus elemen: " << s->data[s->top--] << endl; 
	}
}

int top(Stack s) {
	if (isEmpty(s)) {
		cout << "Stack kosong!\n";
		return -1; // Tambahan agar fungsi int selalu mengembalikan nilai
	} else {
		return s.data[s.top];
	}
}

void display(Stack s) {
	if (isEmpty(s)) {
		cout << "Stack kosong.\n";
	} else {
		cout << "Isi stack (atas -> bawah): ";
		for (int i = s.top; i >= 0; i--) {
			cout << s.data[i] << " ";
		}
		cout << endl;
	}
}