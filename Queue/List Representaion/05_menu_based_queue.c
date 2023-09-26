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
    tmp->data = item;
    tmp->next = NULL;
    if (rear == NULL)
    {
        rear = tmp;
        front = tmp;
    }
    else
    {
        rear->next = tmp;
        rear = tmp;
    }
}
void dequeue()
{
    struct queue *tmp;
    tmp = front;
    if (front == NULL)
    {
        printf("Queue is empty!!");
    }
    else if (front->next == NULL)
    {
        rear = NULL;
        front = NULL;
        printf("Dequeued item is %d.\n", tmp->data);
        free(tmp);
    }
    else
    {
        front = front->next;
        printf("Dequeued item is %d.\n", tmp->data);
        free(tmp);
    }
}
void display()
{
    struct queue *tmp;
    if (front == NULL)
    {
        printf("Queue is empty");
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
    int ch, data;
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
            enqueue(data);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;

        default:
            break;
        }
    } while (ch < 4);

    return 0;
}