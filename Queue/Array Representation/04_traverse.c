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
        for (i = q->rear; i >= 0; i--)
        {
            printf("%d\t", q->items[i]);
        }
    }
}
int main()
{
    struct queue q;
    createEmptyQueue(&q);

    traverse(&q);

    return 0;
}