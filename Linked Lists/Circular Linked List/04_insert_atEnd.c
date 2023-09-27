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

void insert_atEnd(int item)
{
    NodeType *tmp;
    tmp = (NodeType *)malloc(sizeof(NodeType));
    tmp->data = item;
    if (first == NULL)
    {
        first = tmp;
        last = tmp;
        tmp->next = tmp;
    }
    else
    {
        last->next = tmp;
        last = tmp;
        tmp->next = first;
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
    insert_atEnd(5);
    insert_atEnd(15);
    insert_atEnd(25);

    traverse();
}