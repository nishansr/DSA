#include <stdio.h>
struct stack
{
    int data;
    struct stack *next;
};
struct stack *top = NULL;

//! Display Operation
void display()
{
    struct stack *tmp;
    if (top == NULL)
    {
        printf("Stack is empty!!");
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
    display(); //! It will show stack is empty as we haven't pushed anything.

    return 0;
}