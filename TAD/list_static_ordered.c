#include "list_static_ordered.h"

bool isEmptyList(tList L)
{
    return L.LastPos==LNULL;
}
//CORRECTO

void createEmptyList(tList *L)
{
    L->LastPos = LNULL;
}
//CORRECTO

bool insertItem(tItemL item, tList *L) {
    if (L->LastPos==MAX-1) //si la lista está llena
    {
        return false;
    }
    else
    {
        tPosL i;
        if (!isEmptyList(*L) || item>L->LastPos) //se inserta al final
        {
            ++L->LastPos;
            L->Item[L->LastPos] = item;
        }
        else
        {
            ++L->LastPos;
            for (i = L->LastPos; L->Item[i]>item; --i)
                L->Item[i+1] = L->Item[i];
            L->Item[i+1] = item;
        }
        return true;
    }
}
//REPASAR

bool copyList(tList L, tList *M)
{
    createEmptyList(M);
    M->LastPos = L.LastPos;
    tPosL i;
    for (i=0; i<=L.LastPos; ++i)
    {
        M->Item[i] = L.Item[i];
    }

    return true; //?????
}
//NO INICIALIZO M (podría venir inicializada)

void updateItem(tItemL d, tPosL p, tList *L)
{
    L->Item[p]=d;
}
//CORRECTO

void deleteAtPosition(tPosL p, tList *L)
{
    tPosL i;
    for (i = p; i<=L->LastPos; ++i)
        L->Item[i] = L->Item[i+1];
    L->LastPos--;

}
//NO RESTO 1 A LASTPOS

void deleteList(tList *L)
{
    L->LastPos = LNULL;
}

tPosL findItem(tItemL item, tList L)
{
    if (!isEmptyList(L))
    {
        tPosL i;
        for (i = 0; i<=L.LastPos; ++i)
        {
            if (L.Item[i]==item)
                return i;
        }
    }
    return LNULL;
}
//EN PRINCIPIO SIRVE

tItemL getItem(tPosL p, tList L)
{
    return L.Item[p];
}
//CORRECTO

tPosL first (tList L)
{
    return 0;
}
//CORRECTO

tPosL last (tList L)
{
    return L.LastPos;
}
//CORRECTO

tPosL previous(tPosL p, tList L)
{
    return --p;
}
//FALTA DE COMPRENSIÓN

tPosL next(tPosL p, tList L)
{
    if (p==L.LastPos)
        return LNULL;
    else
        return ++p;
}
//CORRECTO