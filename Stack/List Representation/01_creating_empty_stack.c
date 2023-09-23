#include <stdio.h>

struct stack
{
    int data;
    struct stack *next;
};

//! Creating empty stack
struct stack *top = NULL;

int main()
{
    return 0;
}