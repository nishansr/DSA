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

void insert(struct Array *a,int ind, int x)
{
    int i;
    if(a->length < a->size)
    {
        for (i = a->length; i > ind; i--)
        {
            a->A[i] = a->A[i-1];
        }
        
        a->A[ind] = x;
        a->length++;
    }
}

int main()
{
    struct Array arr = {{1, 2, 3, 4},10, 4};
    int i, ind, x;

    printf("Where do you want to insert: ");
    scanf("%d", &ind);
    printf("Enter the number to insert: ");
    scanf("%d", &x);
    
    printf("\nThe array before inserting: \t");
    display(arr);
    
    insert(&arr, ind, x);

    printf("\nThe array after inserting: \t");
    display(arr);
}