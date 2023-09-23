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
int main()
{
    struct stack s;
    createEmptyStack(&s);

    return 0;
}