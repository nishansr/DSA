#include<stdio.h>
struct Array
{
    int A[10];
    int size;
    int length;
};

void display(struct Array a)
{
    int i;
    printf("The elements in the array are:\t");
    for (i = 0; i < a.length; i++)
    {
        printf("%d\t", a.A[i]);
    }
}

void append(struct Array *a, int x)
{
    if(a->length < a->size)
    {
        a->A[a->length] = x;
        a->length++;
    }
}

int main()
{
    struct Array arr = {{1, 2, 3, 4},10, 4};
    int i, x;

    printf("Enter the number to append: ");
    scanf("%d", &x);
    
    printf("\nThe array before appending: \t");
    display(arr);
    
    append(&arr, x);

    printf("\nThe array after appending: \t");
    display(arr);

    return 0;
}