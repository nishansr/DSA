#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next, *prev;
};
struct node *first = NULL;
struct node *last = NULL;

void insert_atEnd(int item)
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
        last->next = tmp;
        tmp->prev = last;
        last = tmp;
    }
}
void deleteFirst()
{
    struct node *tmp = first;
    if (first == NULL)
    {
        printf("Empty Linked List!");
    }
    else if (first == last)
    {
        first = NULL;
        last = NULL;
        free(tmp);
    }
    else
    {
        first = first->next;
        free(tmp);
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
    insert_atEnd(5);
    insert_atEnd(15);
    insert_atEnd(25);

    deleteFirst();

    traverse();
}