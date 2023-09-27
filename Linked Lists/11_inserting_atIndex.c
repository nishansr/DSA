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
struct node *insert_atIndex(struct node *head, int index, int item)
{
    struct node *tmp;
    struct node *p = head;
    tmp = createNode(item);
    int i;
    for (i = 0; i < index - 1; i++)
    {
        p = p->next;
    }
    tmp->next = p->next;
    p->next = tmp;

    return head;
}
void traverse(struct node *n)
{
    if (n != NULL)
    {
        printf("%d\t", n->data);
        traverse(n->next);
    }
}
int main()
{
    struct node *head = createNode(5);
    struct node *n1 = createNode(15);
    head->next = n1;
    struct node *n2 = createNode(25);
    n1->next = n2;

    head = insert_atIndex(head, 2, 22);

    traverse(head);
}