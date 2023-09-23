#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int data;
    struct stack *next;
};
struct stack *top = NULL;

//! Push Operation
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
    push(5);
    push(15);
    push(25);
    push(35);

    display();

    return 0;
}