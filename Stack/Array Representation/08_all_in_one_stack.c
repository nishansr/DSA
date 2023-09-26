#include <stdio.h>
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
void peek(struct stack *s)
{
    if (isEmpty(s))
    {
        printf("Stack is empty!");
    }
    else
    {
        printf("Top of the stack is %d.\n", s->items[s->top]);
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
    int index, res, popitem;

    struct stack s;
    createEmptyStack(&s);

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    push(&s, 40);
    push(&s, 50);

    printf("The items in the stack are: ");
    display(&s);

    popitem = pop(&s);
    printf("\nThe popped item is: %d", popitem);

    printf("\nAfter popped: ");
    display(&s);

    peek(&s);

    return 0;
}