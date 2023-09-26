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

void dequeue()
{
    struct queue *tmp;
    if (front == NULL)
    {
        printf("Queue is empty!");
        return;
    }
    else if (front->next == NULL)
    {
        tmp = front;
        front = rear = NULL;
        printf("Dequeued item : %d\n", tmp->data);
        free(tmp);
    }
    else
    {
        tmp = front;
        front = front->next;
        printf("Dequeued item : %d\n", tmp->data);
        free(tmp);
    }
}

void traverse()
{
    struct queue *tmp;
    if (front == NULL)
    {
        printf("Queue is empty!!");
    }
    else
    {
        tmp = front;
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
    enqueue(12);
    enqueue(22);
    enqueue(32);
    enqueue(42);

    dequeue();

    traverse();

    return 0;
}