// queue.cpp

#include <iostream>
#include "queue.h"
using namespace std;

// Fungsi untuk menginisialisasi Queue
void init(Queue &q) {
    q.front = -1;
    q.rear = -1;
}

// Fungsi untuk mengecek apakah Queue kosong
bool isEmpty(Queue q) {
    return (q.front == -1 && q.rear == -1);
}

// Fungsi untuk mengecek apakah Queue penuh
bool isFull(Queue q) {
    return (q.rear == MAX - 1);
}

void enqueue(Queue &q, int value) {
    if (isFull(q)) {
        cout << "Queue is full. Cannot enqueue " << value << endl;
    } else {
        if (isEmpty(q)) {
            q.front = q.rear = 0;
        } else {
            q.rear++;
        }
        q.data[q.rear] = value;
        cout << value << " berhasil dimasukkan ke queue.\n";
    }
}

void dequeue(Queue &q) {
    if (isEmpty(q)) {
        cout << "Queue kosonng! tidak ada data yang bisa dihapus.\n";
    } else {
        cout << "menghapus data: " << q.data[q.front] << endl;
        if (q.front == q.rear) {
            q.front = q.rear = -1; // Queue menjadi kosong setelah dequeue terakhir
        } else {
            q.front++;
        }
    }
}

void display(Queue q) {
    if (isEmpty(q)) {
        cout << "Queue kosong.\n";
    } else {
        cout << "Isi Queue: ";
        for (int i = q.front; i <= q.rear; i++) {
            cout << q.data[i] << " ";
        }
        cout << endl;
    }
}