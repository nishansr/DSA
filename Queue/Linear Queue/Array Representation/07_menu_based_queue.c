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
    int data, ch, res;
    struct queue q;
    createEmptyQueue(&q);

    printf("------------MENU FOR PROGRAM------------\n");
    printf("1:Enqueue\n2:Dequeue\n3:Traverse\n4:exit\n");

    do
    {
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("What do you want to enqueue: ");
            scanf("%d", &data);
            enqueue(&q, data);
            break;

        case 2:
            res = dequeue(&q);
            printf("Deleted item: %d\n", res);
            break;

        case 3:
            printf("Items is the queue are: ");
            traverse(&q);
            break;

        default:
            exit(1);
            break;
        }

    } while (ch < 4);

    return 0;
}