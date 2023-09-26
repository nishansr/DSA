#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int data;
    struct queue *next;
};
struct queue *q = NULL;

void enqueue(int item)
{
    struct queue *tmp;
    tmp = (struct queue *)malloc(sizeof(struct queue));
    tmp->data = item;
    tmp->next = NULL;
    if (q == NULL)
    {
        q = tmp;
    }
    else
    {
        struct queue *last = q;
        while (last->next != NULL)
        {
            last = last->next;
        }
        last->next = tmp;
    }
}
void dequeue()
{
    struct queue *tmp;
    if (q == NULL)
    {
        printf("Queue is empty!!");
    }
    else if (q->next == NULL)
    {
        printf("Dequeued Item: %d\n", q->data);
        q = NULL;
    }
    else
    {
        tmp = q->next;
        q->next = tmp->next;
        printf("Dequeued Item: %d\n", tmp->data);
        free(tmp);
    }
}
void display()
{
    struct queue *tmp;
    if (q == NULL)
    {
        printf("Queue is empty");
    }
    else
    {
        tmp = q;
        printf("Items in the queue are: ");
        while (tmp != NULL)
        {
            printf("%d\t", tmp->data);
            tmp = tmp->next;
        }
        printf("\n");
    }
}

int main()
{
    int ch, data;
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
            enqueue(data);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;

        default:
            exit(1);
            break;
        }
    } while (ch < 4);

    enqueue(5);
    enqueue(5);
    enqueue(5);
    enqueue(5);

    display();

    return 0;
}