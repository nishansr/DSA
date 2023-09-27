#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int maximum(struct Node *p)
{
    int max = 0;
    while (p != NULL)
    {
        if (max < p->data)
        {
            max = p->data;
        }
        p = p->next;
    }
    return max;
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

    printf("Maximum number in the list = %d", maximum(head));

    free(head);
    free(current);
    free(latest);
}
