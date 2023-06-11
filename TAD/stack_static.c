#include "stack_static.h"

void createEmptyStack(tStack *S)
{
    S->top = SNULL;
}

bool push(tItemS item, tStack *S)
{
    if (S->top==SMAX-1)
        return false;
    else
    {
        ++S->top;
        S->Item[S->top] = item;
    }
    return true;
}

void pop(tStack *S)
{
    --S->top;
}

tItemS peek(tStack S)
{
    return S.Item[S.top];
}

bool isEmptyStack(tStack S)
{
    return S.top == SNULL;
}
