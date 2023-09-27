#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NodeType;
NodeType *first = NULL;
NodeType *last = NULL;

void insert_atbeg(int item)
{
    NodeType *tmp;
    tmp = (NodeType *)malloc(sizeof(NodeType));
    tmp->data = item;
    if (first == NULL)
    {
        tmp->next = tmp;
        first = tmp;
        last = tmp;
    }
    else
    {
        tmp->next = first;
        first = tmp;
        last->next = tmp;
    }
}

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

    insert_atbeg(5);
    insert_atbeg(15);

    traverse();

    return 0;
}
