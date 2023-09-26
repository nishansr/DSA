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

int main()
{
    struct queue q;

    createEmptyQueue(&q);

    return 0;
}