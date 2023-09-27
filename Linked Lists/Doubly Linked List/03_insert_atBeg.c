#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next, *prev;
};
struct node *first = NULL;
struct node *last = NULL;

void insert_atBeg(int item)
{
    struct node *tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->data = item;
    tmp->prev = tmp->next = NULL;
    if (first == NULL)
    {
        first = tmp;
        last = tmp;
    }
    else
    {
        tmp->next = first;
        first->prev = tmp;
        first = tmp;
    }
}

void traverse()
{
    struct node *tmp;
    tmp = first;
    if (first == NULL)
    {
        printf("Empty Linked List!");
    }
    else
    {
        printf("Items in the linked list are: ");
        do
        {
            printf("%d\t", tmp->data);
            tmp = tmp->next;
        } while (tmp != NULL);
    }
}
int main()
{
    insert_atBeg(5);
    insert_atBeg(15);
    insert_atBeg(25);

    traverse();
}