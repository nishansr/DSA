#include<stdio.h>

struct Node
{
    int data;
    struct Node *next;
};
//! This type of structure is call self-referential structure

int main()
{
    struct Node *n;
    n = (struct Node *)malloc(sizeof(struct Node));
    n->data = 40;
    n->next = NULL;
}