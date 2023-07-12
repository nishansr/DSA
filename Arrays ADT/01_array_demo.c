#include<stdio.h>
#include<stdlib.h>
struct Array
{
    int *arr;
    int size;
    int length;
};

void input(struct Array a)
{
    int i;
    printf("Enter the elements of the array:\n");
    for (i = 0; i < a.size; i++)
    {
        scanf("%d", &a.arr[i]);
    }
    a.length = a.size;
}

void display(struct Array a)
{
    int i;
    printf("The elements of the array are:\n");
    for (i = 0; i < a.size; i++)
    {
        printf("%d\t", a.arr[i]);
    }
}

int main()
{
    struct Array a;
    int n;
    printf("Enter the size of an array: ");
    scanf("%d", &n);
    a.arr = (int *) malloc(n*sizeof(int));
    a.size = n;

    input(a);
    display(a);

    return 0;
}