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

int insert_atFirst(struct Node *p, int element)
{
    struct Node *t;
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = element;
    t->next = p;
    p = t;

    display(t);
}

int insert(struct Node *p, int index, int element)
{
    int i;
    struct Node *temp;
    if (index < 0 || index > count(p))
    {
        return;
    }
    temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = element;
    if (index == 0)
    {
        temp->next = p;
        p = temp;
    }
    else
    {
        for (i = 0; i < index - 1; i++)
        {
            p = p->next;
            temp->next = p->next;
            p->next = p;
        }
    }
    display(p);
}

void InsertAtEnd(int newItem)
{
    struct Node *NewNode;
    NewNode = getNode();
    NewNode->data = newItem;
    NewNode->next = NULL;
    if (head == NULL)
    {
        head = NewNode;
    }
    else
    {
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = NewNode;
    }
}

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
    int index, element;

    printf("Where do you want to insert: ");
    scanf("%d", &index);

    printf("What do you want to insert: ");
    scanf("%d", &element);

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

    insert_atFirst(head, element);
    insert(head, index, element);

    free(head);
    free(current);
    free(latest);
}