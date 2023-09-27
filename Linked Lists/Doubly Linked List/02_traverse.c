#include <stdio.h>
struct node
{
    int data;
    struct node *next, *prev;
};
struct node *first = NULL;
struct node *last = NULL;

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
    traverse();
}