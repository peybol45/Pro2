#include "queue_static_circular.h"

void createEmptyQueue(tQueue *Q)
{
    Q->front = 0;
    Q->rear = Q_MAX-1;
}

bool enqueue(tItemQ item, tQueue *Q)
{
    if (Q->front==Q->rear+2) //la cola está llena, se deja un espacio libre
        return false;
    else
    {
        Q->rear+=1;
        Q->Item[Q->rear] = item;
        return true;
    }
}

void dequeue(tQueue *Q)
{
    Q->front+=1;
}

tItemQ front(tQueue Q)
{
    return Q.Item[Q.front];
}

bool isEmptyQueue(tQueue Q)
{
    return Q.front==Q.rear+1;
}