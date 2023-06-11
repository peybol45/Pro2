#ifndef STATIC_LIST_H
#define STATIC_LIST_H

#include <stdbool.h>

#define LNULL (-1)
#define MAX 1000

typedef int tItemL;
typedef int tPosL;

typedef struct {
    tItemL Item[MAX];
    tPosL LastPos;
} tList;

bool isEmptyList(tList L);
void createEmptyList(tList *L);
bool insertItem(tItemL item, tList *L);
bool copyList(tList L, tList *M);
void updateItem(tItemL item, tPosL p, tList *L);
void deleteAtPosition(tPosL p, tList *L);
void deleteList(tList *L);
tPosL findItem(tItemL item, tList L);
tItemL getItem(tPosL p, tList L);
tPosL first(tList L);
tPosL last(tList L);
tPosL previous(tPosL p, tList L);
tPosL next(tPosL p, tList L);

#endif //STATIC_LIST_H