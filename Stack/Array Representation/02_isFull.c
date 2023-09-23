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
//! isFull operation
int isFull(struct stack *s)
{
    if(s->top == MAX - 1)
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
    struct stack s;
    createEmptyStack(&s);

    if (isFull(&s))
    {
        printf("Stack is Full!");
    }
    else
    {
        printf("Stack is not Full!");   //! As our stack is empty, it should execute this line.
    }

    return 0;
}