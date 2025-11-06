#ifndef QUEUE_H
#define QUEUE_H

#define MAX 5

struct Queue {
    int data[MAX];
    int front;
    int rear;
};

void init(Queue &q);
bool isEmpty(Queue q);
bool isFull(Queue q);
void enqueue(Queue &q, int value);
void dequeue(Queue &q);
void display(Queue q);

#endif