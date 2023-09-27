#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *createNode(int item)
{
    struct node *tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->data = item;
    tmp->next = NULL;
}
struct node *insert_atEnd(struct node *head, int item)
{
    struct node *tmp;
    tmp = createNode(item);
    struct node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = tmp;

    return head;
}
void traverse(struct node *head)
{
    struct node *p = head;
    printf("Items in the list are: ");
    while (p != NULL)
    {
        printf("%d\t", p->data);
        p = p->next;
    }
}
int main()
{
    struct node *head = createNode(5);
    struct node *n1 = createNode(15);
    head->next = n1;
    struct node *n2 = createNode(25);
    n1->next = n2;

    head = insert_atEnd(head, 0);

    traverse(head);
}