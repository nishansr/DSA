#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int data;
    struct queue *next;
};
struct queue *front = NULL, *rear = NULL;
void traverse()
{
    struct queue *tmp;
    tmp = front;
    if (front == NULL)
    {
        printf("Queue is empty!!");
    }
    else
    {
        printf("Items in the queue are: ");
        while (tmp != NULL)
        {
            printf("%d\t", tmp->data);
            tmp = tmp->next;
        }
    }
}
int main()
{
    traverse();
    return 0;
}
