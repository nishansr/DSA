#include <stdio.h>
#include <stdlib.h>
#define MAX 10
struct stack
{
    int top;
    int items[MAX];
};
void createEmptyStack(struct stack *s)
{
    s->top = -1;
}
int isFull(struct stack *s)
{
    if (s->top == MAX - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmpty(struct stack *s)
{
    if (s->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(struct stack *s, int item)
{
    if (isFull(s))
    {
        printf("Stack is full!");
    }
    else
    {
        s->top++;
        s->items[s->top] = item;
    }
}
int pop(struct stack *s)
{
    if (isEmpty(s))
    {
        printf("Stack is empty!!");
    }
    else
    {
        int item;
        item = s->items[s->top];
        s->top--;

        return item;
    }
}
int peek(struct stack *s, int index)
{
    if (isEmpty(s))
    {
        printf("Stack is empty!");
    }
    else if (s->top < index)
    {
        printf("Invalid index.\n");
        return 0;
    }
    else
    {
        int item;
        item = s->items[index];
        return item;
    }
}
void display(struct stack *s)
{
    if (isEmpty(s))
    {
        printf("Stack is empty!");
    }
    else
    {
        int i;
        for (i = s->top; i >= 0; i--)
        {
            printf("%d\t", s->items[i]);
        }
    }
}
int main()
{
    int data, ch, x, p, res;
    struct stack s;
    createEmptyStack(&s);

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
            push(&s, data);
            break;

        case 2:
            x = pop(&s);
            printf("Popped item is %d.", x);
            break;

        case 3:
            printf("Items in the stack are: ");
            display(&s);
            break;

        case 4:
            printf("Enter index to visit: ");
            scanf("%d", &p);
            res = peek(&s, p);
            if (res)
            {
                printf("Item is index %d is %d.\n", p, res);
            }
            break;

        default:
            printf("!!Wrong Input!!");
            exit(1);
        }
    } while (ch < 5);

    return 0;
}
