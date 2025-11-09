#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
typedef int infotype;

struct Queue {
    infotype info[5]; // indeks 0..4
    int head; // untuk Alternatif 1 tetap 0
    int tail; // -1 artinya kosong
};

// prototipe sesuai soal
void createQueue(Queue &Q);
bool isEmptyQueue(const Queue &Q);
bool isFullQueue(const Queue &Q);
void enqueue(Queue &Q, infotype x);
infotype dequeue(Queue &Q);
void printInfo(const Queue &Q);

#endif // QUEUE_H
