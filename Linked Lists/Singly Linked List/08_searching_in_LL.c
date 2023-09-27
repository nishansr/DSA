#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int search(struct Node *p, int key)
{
    while (p != NULL)
    {
        if (key == p->data)
        {
            return 1;
        }
        p = p->next;
    }
}

int main()
{
    int key;
    printf("What do you want to search: ");
    scanf("%d", &key);

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

    if (search(head, key))
    {
        printf("Item found");
    }
    else
    {
        printf("Item not found!!");
    }

    free(head);
    free(current);
    free(latest);
}