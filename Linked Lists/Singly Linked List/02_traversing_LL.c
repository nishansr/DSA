#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

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

    while (head != NULL)
    {
        printf("%d\t", head->data);
        head = head->next;
    }

    free(head);
    free(current);
}