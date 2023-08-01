#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int count(struct Node *p)
{
    int count = 0;
    while (p != NULL)
    {
        p = p->next;
        count++;
    }
    return count;
}

int main()
{
    struct Node *head;
    head = (struct Node *)malloc(sizeof(struct Node));
    head->data = 1;
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

    printf("No. of nodes = %d", count(head));

    free(head);
}
