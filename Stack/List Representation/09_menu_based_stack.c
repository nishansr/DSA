#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int data;
    struct stack *next;
};
struct stack *top = NULL;

void push(int item)
{
    struct stack *tmp;
    tmp = (struct stack *)malloc(sizeof(struct stack));
    if (top == NULL)
    {
        tmp->data = item;
        tmp->next = NULL;
        top = tmp;
    }
    else
    {
        tmp->data = item;
        tmp->next = top;
        top = tmp;
    }
}

void pop()
{
    struct stack *tmp;
    if (top == NULL)
    {
        printf("Stack is empty!!");
        return;
    }
    else
    {
        tmp = top;
        top = top->next;
        printf("Popped item = %d\n", tmp->data);

        free(tmp);
    }
}

void display()
{
    struct stack *tmp;
    if (top == NULL)
    {
        printf("Stack is empty!!");
        return;
    }
    else
    {
        tmp = top;
        printf("Items in the stack are: ");
        while (tmp != NULL)
        {
            printf("%d\t", tmp->data);
            tmp = tmp->next;
        }
    }
}

int main()
{
    int data, ch;

    printf("------------MENU FOR PROGRAM------------\n");
    printf("1: push\n2:pop\n3:display\n4:peek\n5:exit\n");
    do
    {
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter data to be pushed: ");
            scanf("%d", &data);
            push(data);
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        default:
            printf("!!Wrong Input!!");
            exit(1);
        }
    } while (ch < 5);

    return 0;
}
