#include "queue.h"
#include <iomanip>
#include <iostream>
using namespace std;

void createQueue(Queue &Q) {
    Q.head = 0;
    Q.tail = -1;
    // inisialisasi dengan nilai -1 (menunjukkan slot kosong)
    for (int i = 0; i < 5; ++i) Q.info[i] = -1;
}

bool isEmptyQueue(const Queue &Q) {
    return Q.tail == -1;
}

bool isFullQueue(const Queue &Q) {
    return Q.tail == 4; // indeks terakhir = 4
}

void enqueue(Queue &Q, infotype x) {
    if (isFullQueue(Q)) {
        cout << "enqueue gagal: queue penuh\n";
        return;
    }
    Q.tail++;
    Q.info[Q.tail] = x;
}

infotype dequeue(Queue &Q) {
    if (isEmptyQueue(Q)) {
        cout << "dequeue gagal: queue kosong\n";
        return -999999; // sentinel error value
    }
    infotype val = Q.info[Q.head];
    // geser semua elemen ke kiri (head tetap di 0)
    for (int i = 0; i < Q.tail; ++i) {
        Q.info[i] = Q.info[i + 1];
    }
    Q.info[Q.tail] = -1; // kosongkan slot terakhir setelah geser
    Q.tail--;
    if (Q.tail < 0) Q.tail = -1;
    return val;
}

void printInfo(const Queue &Q) {
    cout << "H - T   | Queue Info\n";
    // baris H - T (tampilkan posisi head & tail seperti contoh)
    // kita print satu baris yang menunjukkan head dan tail numerik
    cout << "H=";
    if (isEmptyQueue(Q)) cout << -1;
    else cout << Q.head;
    cout << " T=";
    if (isEmptyQueue(Q)) cout << -1;
    else cout << Q.tail;
    cout << "  | ";

    // tampilkan isi array (5 slot) dengan nilai -1 sebagai kosong
    for (int i = 0; i < 5; ++i) {
        if (i) cout << " ";
        cout << Q.info[i];
    }
    if (isEmptyQueue(Q)) cout << "    | empty queue";
    cout << "\n";
}
