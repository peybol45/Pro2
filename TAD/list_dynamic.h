#ifndef DYNAMIC_LIST_H
#define DYNAMIC_LIST_H

#endif //DYNAMIC_LIST_H

#include <stdbool.h>
#include <stdlib.h>
#define LNULL NULL


typedef int tItemL;

typedef struct tNode* tPosL;

struct tNode
{
    tItemL Item;
    tPosL sig;
};

typedef tPosL tList;

void createEmptyList(tList *L);
bool createNode(tPosL* p);
bool insertItem(tItemL item, tPosL p, tList *L);
void updateItem(tItemL item, tPosL p, tList* L);
tPosL findItem(tItemL item,tList L);
bool isEmptyList(tList L);
tItemL getItem(tPosL p, tList L);
tPosL first(tList L);
tPosL last(tList L);
tPosL previous(tPosL p, tList L);
tPosL next(tPosL p,tList L);
void deleteAtPosition(tPosL p , tList *L);
void deleteList(tList *L);
bool copyList(tList L, tList *M);
