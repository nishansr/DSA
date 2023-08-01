#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void display(struct Node *p)
{
    if (p != NULL)
    {
        printf("%d\t", p->data);
        display(p->next);
    }
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

    display(head);

    free(head);
}