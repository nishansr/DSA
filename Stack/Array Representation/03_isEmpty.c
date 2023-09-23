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
//! isEmpty operation
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
int main()
{
    struct stack s;
    createEmptyStack(&s);

    if (isEmpty(&s))
    {
        printf("Stack is Empty!"); //! Since our stack is empty, it should execute this line.
    }
    else
    {
        printf("Stack is not Empty!");
    }

    return 0;
}