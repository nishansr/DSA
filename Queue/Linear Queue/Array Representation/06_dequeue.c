#include <stdio.h>
#define MAX 10
struct queue
{
    int rear, front, items[MAX];
};
void createEmptyQueue(struct queue *q)
{
    q->rear = -1;
    q->front = 0;
}
int isEmpty(struct queue *q)
{
    if (q->rear < q->front)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct queue *q)
{
    if (q->rear == MAX - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void enqueue(struct queue *q, int item)
{
    if (isFull(q))
    {
        printf("Queue is full!");
    }
    else
    {
        q->rear++;
        q->items[q->rear] = item;
    }
}
int dequeue(struct queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is Empty!");
    }
    else
    {
        int item;
        item = q->items[q->front];
        q->front++;

        return item;
    }
}
void traverse(struct queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty!");
        return;
    }
    else
    {
        int i;
        for (i = q->rear; i >= q->front; i--)
        {
            printf("%d\t", q->items[i]);
        }
    }
}
int main()
{
    struct queue q;
    createEmptyQueue(&q);

    enqueue(&q, 5);
    enqueue(&q, 15);
    enqueue(&q, 25);
    enqueue(&q, 35);

    printf("\nBefore dequeue: ");
    traverse(&q);
    dequeue(&q);
    printf("\nAfter dequeue: ");
    traverse(&q);

    return 0;
}