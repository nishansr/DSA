//! Array implementation of circular queue without sacrificing one cell using count variable

#include <stdio.h>
#define MAX 10
struct queue
{
    int front, rear, count;
    int items[MAX];
};
void createEmptyStack(struct queue *q)
{
    q->front = MAX - 1;
    q->rear = MAX - 1;
    q->count = 0;
}
int isEmpty(struct queue *q)
{
    if (q->count == 0)
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
    if (q->count == MAX)
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
        printf("Queue is full!!");
    }
    else
    {
        q->rear = (q->rear + 1) % MAX;
        q->items[q->rear] = item;
        q->count++;
    }
}
void dequeue(struct queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty!!");
    }
    else
    {
        q->front = (q->front + 1) % MAX;
        printf("\nDequeued item : %d\n", q->items[q->front]);
        q->count--;
    }
}
void display(struct queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty!!");
    }
    else
    {
        int i;
        printf("Items in the queue are: ");
        for (i = (q->front + 1) % MAX; i != q->rear; i = (i + 1) % MAX)
        {
            printf("%d\t", q->items[i]);
        }
        printf("%d", q->items[q->rear]);
    }
}

int main()
{
    int ch, data;
    struct queue q;
    createEmptyStack(&q);

    printf("------------MENU FOR PROGRAM------------\n");
    printf("1:Enqueue\n2:Dequeue\n3:Traverse\n4:exit\n");
    do
    {
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("What do you want to enqueue: ");
            scanf("%d", &data);
            enqueue(&q, data);
            break;
        case 2:
            dequeue(&q);
            break;
        case 3:
            display(&q);
            break;

        default:
            exit(1);
            break;
        }
    } while (ch < 4);

    return 0;
}