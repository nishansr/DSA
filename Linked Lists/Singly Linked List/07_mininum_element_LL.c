#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int minimum(struct Node *p)
{
    int min = p->data;
    while (p != NULL)
    {
        if (min > p->data)
        {
            min = p->data;
        }
        p = p->next;
    }
    return min;
}

int main()
{
    struct Node *head;
    head = (struct Node *)malloc(sizeof(struct Node));
    head->data = 40;
    head->next = NULL;

    struct Node *current;
    current = (struct Node *)malloc(sizeof(struct Node));
    current->data = 50;
    current->next = NULL;
    head->next = current;

    struct Node *latest;
    latest = (struct Node *)malloc(sizeof(struct Node));
    latest->data = 60;
    latest->next = NULL;
    current->next = latest;

    printf("Minimum number in the list = %d", minimum(head));

    free(head);
    free(current);
    free(latest);
}