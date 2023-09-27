#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node NodeType;
NodeType *first;
NodeType *last;

void traverse()
{
    NodeType *tmp;
    if (first == NULL)
    {
        printf("Empty Linked List");
    }
    else
    {
        printf("Items in the linked list are: ");
        tmp = first;
        do
        {
            printf("%d\t", tmp->data);
            tmp = tmp->next;
        } while (tmp != first);
    }
}

int main()
{
    traverse();
}