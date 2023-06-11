#include "binary_search_tree.h"
#include <stdio.h>
#include <stdlib.h>

bool createBSTNode(tBSTPos* p, tKey key)
{
    *p = malloc(sizeof(struct tBSTNode));
    if (*p!=NULLBST)
    {
        (*p)->key = key;
        (*p)->left = NULLBST;
        (*p)->right = NULLBST;
    }

    return *p!=NULLBST;
}

bool isEmptyTree (tBST tree)
{
    return tree==NULLBST;
}

void createEmptyTree(tBST* tree)
{
    *tree = NULLBST;
}

tBST findKey(tBST tree, tKey key)
{
    if (isEmptyTree(tree))
        return NULLBST;
    else if (key==tree->key)
        return tree;
    else if (key<tree->key)
        return findKey(tree->left, key);
    else
        return findKey(tree->right, key);
}

bool insertKey(tBST* tree, tKey key)
{
   if (isEmptyTree(*tree))
       return createBSTNode(tree, key);
   else if (key == (*tree)->key)
       return true;
   else if (key < (*tree)->key)
       return insertKey(&(*tree)->left, key);
   else
       return insertKey(&(*tree)->right, key);
}

void replace (tBST* subTree,tBST* auxTree)
{
    if (!isEmptyTree((*subTree)->right))
    {
        replace(&(*subTree)->right,auxTree);
    }
    else
    {
        (*auxTree)->key = (*subTree)->key; //We replace the data fields of the node
        *auxTree = *subTree;               //We mark the node on which we will call free()
        (*subTree) = (*subTree)->left;     //We re-link the tree structure by "skyping"
        //the node to be deleted
    }
}