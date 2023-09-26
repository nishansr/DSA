#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int data;
    struct queue *next;
};
struct queue *front = NULL, *rear = NULL;

void enqueue(int item)
{
    struct queue *tmp;
    tmp = (struct queue *)malloc(sizeof(struct queue));
    if (rear == NULL)
    {
        tmp->data = item;
        tmp->next = NULL;
        rear = tmp;
        front = tmp;
    }
    else
    {
        tmp->data = item;
        tmp->next = NULL;
        rear->next = tmp;
        rear = tmp;
    }
}

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
        printf("The items in the queue are: ");
        while (tmp != NULL)
        {
            printf("%d\t", tmp->data);
            tmp = tmp->next;
        }
    }
}

int main()
{
    enqueue(12);
    enqueue(22);
    enqueue(32);
    enqueue(42);

    traverse();
}