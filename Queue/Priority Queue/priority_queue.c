#include <stdio.h>
#define MAX 10
struct pqueue
{
    int rear, front, items[MAX];
};
struct pqueue *pq;
void createEmptyQueue(struct pqueue *q)
{
    q->rear = -1;
    q->front = 0;
}
int isEmpty(struct pqueue *q)
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
int isFull(struct pqueue *q)
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
void enqueue(struct pqueue *q, int item)
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
int dequeue(struct pqueue *q)
{
    int i, tmp = 0, x;
    x = q->items[q->front];
    if (isEmpty(q))
    {
        printf("Queue is Empty!");
    }
    else
    {
        for (i = q->front + 1; i < q->rear; i++)
        {
            if (x > q->items[i])
            {
                tmp = i;
                x = q->items[i];
            }
        }
        for (i = tmp; i < q->rear - 1; i++)
        {
            q->items[i] = q->items[i + 1];
        }
        q->rear--;
        return x;
    }
}
void traverse(struct pqueue *q)
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
    struct pqueue q;
    createEmptyQueue(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 5);

    traverse(&q);

    printf("\nDequeued Item: %d", dequeue(&q));

    return 0;
}
