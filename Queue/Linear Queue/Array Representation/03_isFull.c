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
int main()
{
    struct queue q;
    createEmptyQueue(&q);

    isFull(&q) ? printf("Queue is Full!") : printf("Queue is not full!");

    return 0;
}