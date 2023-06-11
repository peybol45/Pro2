#ifndef PRACTICAS_TAD_CIRCULAR_QUEUE_H
#define PRACTICAS_TAD_CIRCULAR_QUEUE_H

#include <stdbool.h>

#define Q_MAX 10
typedef int tItemQ;

typedef struct Queue{
    tItemQ Item[Q_MAX];
    int front, rear;
} tQueue;

void createEmptyQueue(tQueue *Q);
bool enqueue(tItemQ d, tQueue *Q);
void dequeue(tQueue *Q);
tItemQ front(tQueue Q);
bool isEmptyQueue(tQueue Q);

#endif //PRACTICAS_TAD_CIRCULAR_QUEUE_H