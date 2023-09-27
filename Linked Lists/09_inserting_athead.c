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
void traverse(struct node *n)
{
    if (n != NULL)
    {
        printf("%d\t", n->data);
        traverse(n->next);
    }
}
struct node *insert_atHead(struct node *head, int item)
{
    struct node *tmp;
    tmp = createNode(item);
    tmp->next = head;
    head = tmp;
}
int main()
{
    struct node *head = createNode(5);
    struct node *n1 = createNode(15);
    head->next = n1;
    struct node *n2 = createNode(25);
    n1->next = n2;

    head = insert_atHead(head, 0);

    traverse(head);
}