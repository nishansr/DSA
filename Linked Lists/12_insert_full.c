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
struct node *insert(struct node *head, int index, int item)
{
    struct node *tmp;
    tmp = createNode(item);
    if (index == 0)
    {
        tmp->next = head;
        head = tmp;

        return tmp;
    }
    else if (index > 0)
    {
        struct node *p = head;
        int i;
        for (i = 0; i < index - 1; i++)
        {
            p = p->next;
        }
        if (p)
        {
            tmp->next = p->next;
            p->next = tmp;

            return head;    
        }
    }
}
void traverse(struct node *head)
{
    printf("Items in the List are: ");
    while (head != NULL)
    {
        printf("%d\t", head->data);
        head = head->next;
    }
}
int main()
{
    struct node *head = createNode(5);
    struct node *n1 = createNode(15);
    head->next = n1;
    struct node *n2 = createNode(25);
    n1->next = n2;

    head = insert(head, 0, 0);
    head = insert(head, 2, 22);

    traverse(head);
}