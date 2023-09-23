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
//! display operation
void display(struct stack *s)
{
    if (isEmpty(s))
    {
        printf("Stack is empty!"); //! Our stack is empty, so this code will execute
    }
    else
    {
        int i;
        for (i = s->top; i >= 0; i--)
        {
            printf("%d", s->items[i]);
        }
    }
}
int main()
{
    struct stack s;
    createEmptyStack(&s);

    display(&s);

    return 0;
}