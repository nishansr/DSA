#include <stdio.h>
#define MAX 10
struct queue
{
    int front, rear, items[MAX];
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
int main()
{
    struct queue q;
    createEmptyQueue(&q);

    isEmpty(&q) ? printf("Queue is empty!!") : printf("Queue is not empty!");

    return 0;
}