#include "stack_dynamic.h"
#include <stdlib.h>

void createEmptyStack(tStack *S)
{
    *S = SNULL;
}

bool createNode(tPosS *p)
{
    *p = malloc(sizeof(struct tNodeS));
    return *p!=SNULL;
}

bool push(tItemS item, tStack *S)
{
    tPosS p;
    if (!createNode(&p))
        return false;
    else
    {
        p->Item = item;
        p->down = *S;
        *S = p;

        return true;
    }
}

void pop(tStack *S)
{
    tPosS aux;

    aux = *S;
    *S = (*S)->down;
    free(aux);
}

tItemS peek(tStack S)
{
    return (*S).Item;
}

bool isEmptyStack(tStack S)
{
    return S==SNULL;
}