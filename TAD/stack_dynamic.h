#include <stdbool.h>
#include <stdlib.h>

/* Types definition */

#define SNULL NULL

typedef int tItemS;
typedef struct tNodeS *tPosS;

struct tNodeS {
    tItemS Item;
    tPosS down;
};

typedef tPosS tStack;

/* Function prototypes */

void createEmptyStack(tStack *S);
bool push(tItemS d, tStack *S);
void pop(tStack *S);
tItemS peek(tStack S);
bool isEmptyStack(tStack S);

